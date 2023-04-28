#include <math.h>
#include "image.h"


struct sImage
{
int NbLig ; // Nombre de lignes de l’image
int NbCol ; // Nombre de colonnes de l’image
tMatrice NivGris ; // Matrice des niveaux de gris de l’image
};

tImage ImAllouer(int NbLignes, int NbColonnes){
    tImage stockage =malloc(sizeof(struct sImage));
    stockage->NbLig=NbLignes;
    stockage->NbCol=NbColonnes;
    stockage->NivGris = MatAllouer( NbLignes, NbColonnes);
    return stockage;

}

void ImLiberer(tImage *pIm){
    if(*pIm!=NULL){
        MatLiberer(&((*pIm)->NivGris));
        free(*pIm);

    }

}

int ImNbLig(tImage Im){
    return Im->NbLig;
}

int ImNbCol(tImage Im){
    return Im->NbCol;
}

tMatrice ImNivGris(tImage Im){
    return Im->NivGris;
}

tImage ImLire(char NomFichier[]){
    FILE* fichier = fopen(NomFichier, "rb");
    if (fichier == NULL) {
        fprintf(stderr, "Erreur : impossible d'ouvrir le fichier %s.\n", NomFichier);
        return NULL;
    }
    char sig[3];
    int col,lig,nivgris;
    tImage image;

    fscanf(fichier,"%s",sig);
    fscanf(fichier,"%d",&col);
    fscanf(fichier,"%d",&lig);
    fscanf(fichier,"%d",&nivgris);

    image=ImAllouer(lig,col);
    
    tMatrice couleur;


    couleur = image->NivGris;
    int tmp;
    for (int i = 0; i < lig; i++)
    {
        for (int j = 0; j < col; j++)
        {
            fscanf(fichier,"%d",&tmp);
            couleur[i][j]=round(255.0*tmp/nivgris);
        }
        
    }
    
    fclose(fichier);
    // MatAfficher(couleur,lig,col);
    return image;
}

void ImEcrire(tImage Im, char NomFichier[]) {
    FILE* fichier = fopen(NomFichier, "w");
    if (fichier == NULL) {
        fprintf(stderr, "Erreur : impossible d'ouvrir le fichier %s.\n", NomFichier);
        return;
    }

    fprintf(fichier, "P2\n");
    fprintf(fichier, "%d %d\n", Im->NbCol, Im->NbLig);
    fprintf(fichier, "255\n");

    tMatrice mat = Im->NivGris;
    for (int i = 0; i < Im->NbLig; i++) {
        for (int j = 0; j < Im->NbCol; j++) {
            fprintf(fichier, "%d ", mat[i][j]);
        }
        fprintf(fichier, "\n");
    }

    fclose(fichier);
}



