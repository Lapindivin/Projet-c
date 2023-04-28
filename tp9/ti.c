#include "ti.h"
#include "matrice.h"
#include "image.h"
#include <math.h>

tImage Rotation(tImage Im){

    int nbl = ImNbLig(Im);
    int nbc = ImNbCol(Im);
    tImage Im2=ImAllouer(nbc,nbl);
    tMatrice mat =ImNivGris(Im);
    tMatrice mat2 =ImNivGris(Im2);
    for (int i = 0; i < nbl; i++)
    {
        int l=nbc-1;
        for (int j = 0; j < nbc; j++)
        {
            mat2[l][i]=mat[i][j];
            l--;
        }
        
    }
    return Im2;
}

tImage AppliquerTable(unsigned char Table[256], tImage Im){
    int nbl = ImNbLig(Im);
    int nbc = ImNbCol(Im);
    tImage Im2=ImAllouer(nbl,nbc);
    tMatrice mat =ImNivGris(Im);
    tMatrice mat2 =ImNivGris(Im2);
    for (int i = 0; i < nbl; i++)
    {
        for (int j = 0; j < nbc; j++)
        {
            mat2[i][j]=Table[mat[i][j]];
        }
        
    }
    return Im2;
}

void RemplirTableInversion(unsigned char Table[256]){
    
    for (int i = 0; i < 256; i++)
    {
        Table[i]=255-i;
    }
    
}

void RemplirTableGamma(double Gamma, unsigned char Table[256]){
    for (int i = 0; i < 256; i++)
    {
        Table[i]=round(255*(pow(i/255.0,Gamma)));
    }
}