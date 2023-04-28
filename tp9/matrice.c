#include "matrice.h"


tMatrice MatAllouer(int NbLig, int NbCol){
    unsigned char * tabELt=malloc(NbCol*NbLig*sizeof(unsigned char));
    tMatrice m;
    m=malloc(NbLig*sizeof(unsigned char *));
    if(m==NULL){
        return NULL;
    }
    int i=0,j=0;
    while (i<NbLig)
    {
        m[i]=&tabELt[j];
        i++;
        j+=NbCol;
    }
    return m;
    

}

tMatrice MatLire(int *pNbLig, int *pNbCol){
    printf("entrer le nombre de ligne  ");
    fflush(stdout);
    scanf("%d",pNbLig);
    printf("entrer le nombre de colonne  ");
    fflush(stdout);
    scanf("%d",pNbCol);
    tMatrice m;
    m=MatAllouer(*pNbLig,*pNbCol);
    int i,j;
    for (i = 0; i < *pNbLig; i++)
    {
        for ( j = 0; j < *pNbCol; j++)
        {
            scanf("%hhu",&m[i][j]);
        }
        
    }
    return m;
    
}

void MatAfficher(tMatrice Mat, int NbLig, int NbCol){
    int i,j;
    for (i = 0; i < NbLig; i++)
    {
        for ( j = 0; j < NbCol; j++)
        {
            printf("%d  ",Mat[i][j]);
            printf("|");
        }
    printf("\n");   
    }
}

void MatLiberer(tMatrice *pMat){
    if(*pMat!=NULL){
        free(**pMat);
        free(*pMat);
        *pMat=NULL;
    }

}