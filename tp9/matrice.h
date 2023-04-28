#ifndef MATRICE_H
#define MATRICE_H

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char **tMatrice;



extern tMatrice MatAllouer(int NbLig, int NbCol);

extern tMatrice MatLire(int *pNbLig, int *pNbCol);

extern void MatAfficher(tMatrice Mat, int NbLig, int NbCol);

extern void MatLiberer(tMatrice *pMat);

#endif /*MODULE_H*/