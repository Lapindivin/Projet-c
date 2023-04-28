#include "matrice.h"

int main(){
    int Nblig,Nbcol;
    tMatrice m;
    m=MatLire(&Nblig,&Nbcol);
    MatAfficher(m,Nblig,Nbcol);

 
    return 0;
}