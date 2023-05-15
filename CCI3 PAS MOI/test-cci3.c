#include <stdio.h>
#include "cci3.h"

/**************************************************************************/
/* POUR TESTER CHAQUE EXERCICE, "DÉ-COMMENTEZ" LES LIGNES CORRESPONDANTES */
/**************************************************************************/

int main(void)
{
/*  printf("TEST DE L'EXERCICE 1\n");
  char ch1[]="Les sanglots longs des violons de l'automne";
  char ch2[]="bercent  mon";
  char ch3[]=" ";
  printf("\"%s\" : %d attendu, %d obtenu\n",ch1,37,NbNonEsp(ch1));
  printf("\"%s\" : %d attendu, %d obtenu\n",ch2,10,NbNonEsp(ch2));
  printf("\"%s\" : %d attendu, %d obtenu\n",ch3,0,NbNonEsp(ch3));*/

  printf("\nTEST DE L'EXERCICE 2\n");
  double Temperatures[4]={9.0,8.0,16.0,11.0};
  double Moy;
  int NbInf,NbSup;
  Stats(Temperatures,4,&Moy,&NbInf,&NbSup);
  printf("Valeurs attendues : %f %d %d\n",11.0,3,2);
  printf("Valeurs obtenues  : %f %d %d\n",Moy,NbInf,NbSup);

  printf("\nTEST DE L'EXERCICE 3\n");
  int Matrice[NB_LIG_MAX][NB_COL_MAX]={{1,2},{3,4},{5,6}};
  int ProdTot,ProdLig[3];
  ProdTot=Produits(Matrice,3,2,ProdLig);
  printf("Valeurs attendues : [%d, %d, %d] %d\n",2,12,30,720);
  printf("Valeurs obtenues  : [%d, %d, %d] %d\n",ProdLig[0],ProdLig[1],ProdLig[2],
                                                 ProdTot);

  /*printf("\nTEST DE L'EXERCICE 4\n");
  struct sPoint MaCourbe[NB_POINTS_MAX]={{4570,-2.0,-1.5},{1212,1.5,-0.5},{5823,-1.0,-2.0}};
  int NbPoints=3;
  int NumCoordNeg[3],NbCoordNeg;
  NbCoordNeg=PointsNeg(MaCourbe,NbPoints,NumCoordNeg);
  printf("Valeurs attendues : %d [%d, %d]\n",2,4570,5823);
  printf("Valeurs obtenues  : %d [%d, %d]\n",NbCoordNeg,NumCoordNeg[0],NumCoordNeg[1]); */

/*  SI VOUS N'AVEZ PAS FAIT L'EXERCICE 4, DÉ-COMMENTEZ TOUT DE MÊME LES LIGNES DE
 DÉCLARATION DE MaCourbe ET DE NbPoints*/
/*  printf("\nTEST DE L'EXERCICE 5\n");
  struct sPoint Nouveau={2733,2.0,2.5};
  AjouterPointEnFin(MaCourbe,&NbPoints,&Nouveau);
  printf("Valeurs attendues : %d [{%d,%.2f,%.2f}, {%d,%.2f,%.2f}, {%d,%.2f,%.2f}, {%d,%.2f,%.2f}]\n",
         4,4570,-2.0,-1.5,1212,1.5,-0.5,5823,-1.0,-2.0,2733,2.0,2.5);
  printf("Valeurs obtenues  : %d [{%d,%.2f,%.2f}, {%d,%.2f,%.2f}, {%d,%.2f,%.2f}, {%d,%.2f,%.2f}]\n",
         NbPoints,MaCourbe[0].Numero,MaCourbe[0].x,MaCourbe[0].y,
                  MaCourbe[1].Numero,MaCourbe[1].x,MaCourbe[1].y,
                  MaCourbe[2].Numero,MaCourbe[2].x,MaCourbe[2].y,
                  MaCourbe[3].Numero,MaCourbe[3].x,MaCourbe[3].y);*/

/*  printf("\nTEST DE L'EXERCICE 6\n");
  tStock Stock=NULL;
  AjouterProduitEnTete(&Stock,2456,2,29.9);
  printf("Valeurs attendues : [{%d,%d,%.2f,%p}]\n",
         2456,2,29.9,NULL);
  printf("Valeurs obtenues  : [{%d,%d,%.2f,%p}]\n",
         Stock->Reference,Stock->Quantite,Stock->Prix,(void *)Stock->pSuivant);
  AjouterProduitEnTete(&Stock,1052,15,54.5);
  printf("Valeurs attendues : [{%d,%d,%.2f}, {%d,%d,%.2f,%p}]\n",
         1052,15,54.5,2456,2,29.9,NULL);
  printf("Valeurs obtenues  : [{%d,%d,%.2f}, {%d,%d,%.2f,%p}]\n",
         Stock->Reference,Stock->Quantite,Stock->Prix,
         Stock->pSuivant->Reference,Stock->pSuivant->Quantite,Stock->pSuivant->Prix,
         (void *)Stock->pSuivant->pSuivant);*/

/*  printf("\nTEST DE L'EXERCICE 7\n");
  struct sProduit p1={2456,2,29.9,NULL},
                  p2={1052,15,54.5,NULL},
                  p3={3201,18,17.5,NULL};
  p1.pSuivant=&p2;
  p2.pSuivant=&p3;
  tStock MonStock=&p1;
  int Res;
  int Qt;
  float Px;
  Res=RechercherProduit(MonStock,1052,&Qt,&Px);
  printf("Valeurs attendues : %d %d %.2f\n",1,15,54.5);
  printf("Valeurs obtenues  : %d %d %.2f\n",Res,Qt,Px);
  Res=RechercherProduit(MonStock,1234,&Qt,&Px);
  printf("Valeur attendue : %d\n",0);
  printf("Valeur obtenue  : %d\n",Res);*/

  return 0;
}
