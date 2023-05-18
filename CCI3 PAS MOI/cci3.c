#include <stdlib.h>
#include <stdio.h>
#include "cci3.h"

// ================ EXERCICE 1 ================ //
/* Calcul du nombre de caractères différent de l'espace contenus dans une chaîne de
 * caractères
 * Paramètre :
 *    - ch : adresse du premier caractère de la chaîne de caractères
 * Valeur de retour :
 *    - nombre de caractères différents du caractère espace présents dans la chaîne
 *      de caractères
 */
// int NbNonEsp(const char *ch)
// {
//   int nbc=0;
//   int nbespace=0;
//   char c;
//   c=ch[nbc+nbespace];
//   while (nbc+nbespace!=37);
//   {
//     if (c!=" ")
//     {
//       nbc++;
//     }
//     else
//     {
//       nbespace++;
//     }
//     c=ch[nbc+nbespace];
//   }
//   return nbc;
// }

// ================ EXERCICE 2 ================ //
/* Calcul de statistiques sur un tableau de températures :
 *     - moyenne des températures
 *     - nombre de températures inférieures ou égales à la moyenne
 *     - nombre de températures supérieures ou égales à la moyenne
 * Paramètres :
 *    - Temp : tableau de températures de type double
 *    - NbTemp : nombre de températures stockées dans le tableau Temp
 *    - pMoy : adresse de la moyenne des températures
 *    - pNbInf : adresse du nombre de températures inférieures ou égales à la moyenne
 *    - pNbSup : adresse du nombre de températures supérieures ou égales à la moyenne
 */
void Stats(double Temp[], int NbTemp, double *pMoy, int *pNbInf, int *pNbSup)
{
 double somme;
 for (int i=0;i<NbTemp;i++)
 {
   somme=somme+Temp[i];
 }
 *pMoy=somme/NbTemp;
 for (int i=0;i<NbTemp;i++)
 {
   if (Temp[i]<=*pMoy)
   {
     *pNbInf=*pNbInf+1;
   }
   if (Temp[i]>=*pMoy)
   {
     *pNbSup=*pNbSup+1;
   }
 }
}

// ================ EXERCICE 3 ================ //
/* Calcul du produit (multiplication) de chaque ligne d'une matrice de valeurs de type
 * int et du produit de toutes ses valeurs
 * Paramètres :
 *    - Mat : matrice (tableau à deux dimensions) de valeurs de type int
 *    - NbLig : nombre de lignes de la matrice
 *    - NbCol : nombre de colonnes de la matrice
 *    - Prod : tableau des produits (multiplications) de chaque ligne de la matrice
 * Valeur de retour :
 *    - produit (multiplication) de tous les éléments de la matrice
 */
int Produits(int Mat[NB_LIG_MAX][NB_COL_MAX], int NbLig, int NbCol, int Prod[NB_LIG_MAX])
{
  int indProd=0;
  for (int i=0;i<NbLig;i++)
  {
    int resprod=1;
    for(int j=0;j<NbCol;j++)
    {
      resprod=resprod*Mat[i][j];
    }
    Prod[indProd]=resprod;
    indProd++;
  }
  int resprodtot=1;
  for (int i=0;i<NbLig;i++)
  {
    resprodtot=resprodtot*Prod[i];
  }
  Prod[indProd+1]=resprodtot;
  return *Prod;
}

// ================ EXERCICE 4 ================ //
/* Détermination de la liste des numéros des points dont les coordonnées, abscisse et
 * ordonnée, sont toutes les deux strictement négatives
 * Paramètres :
 *    - Courbe : tableau des points
 *    - NbPoints : nombre de points dans le tableau
 *    - NumNeg : tableau des numéros des points dont l'abscisse et l'ordonnée sont
 *               négatives
 * Valeur de retour :
 *    - nombre de points dont l'abscisse et l'ordonnée sont strictement négatives
 */
int PointsNeg(struct sPoint Courbe[], int NbPoints, int NumNeg[])
{
  return 0;
}

// ================ EXERCICE 5 ================ //
/* Ajout d'un point en fin de courbe
 * Paramètres :
 *    - Courbe : tableau des points
 *    - pNbPoints : adresse du nombre de points de la courbe
 *    - pPoint : adresse du point qui doit être ajouté
 */
void AjouterPointEnFin(struct sPoint Courbe[], int *pNbPoints, const struct sPoint *pPoint)
{
// À FAIRE
}

// ================ EXERCICE 6 ================ //
/* Ajout d'un produit en tête de liste avec allocation dynamique
 * Cette fonction alloue l'espace mémoire pour le nouveau produit et le place en tête de la
 * liste chaînée.
 * Paramètres
 *    - pStock : adresse du stock
 *    - Ref : référence du produit à ajouter
 *    - Qt : quantité du produit à ajouter
 *    - Px : prix du produit à ajouter
 */
void AjouterProduitEnTete(tStock *pStock, int Ref, int Qt, float Px)
{
// À FAIRE
}

// ================ EXERCICE 7 ================ //
/* Recherche de la quantité et du prix d'un produit à partir de sa référence
 * Paramètres :
 *    - Stock : liste chaînée de produits
 *    - Ref : référence du produit recherché dans la liste
 *    - pQt : adresse de la quantité du produit recherché
 *    - pPx : adresse du prix du produit recherché
 * Valeur de retour : 1 si le produit a été trouvé, 0 sinon
 */
int RechercherProduit(tStock Stock, int Ref, int *pQt, float *pPx)
{
// À FAIRE
  return 0; // LIGNE À MODIFIER
}
