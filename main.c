#include <stdio.h>
#include <stdlib.h>
#include "Tp_Vecteur_C_Header.h"



int main()
{

    tVecteur Vect_U;
    tVecteur Vect_V;

    printf("Veuillez saisir la premiere coordonnee du premier vecteur\n");
    scanf("%d", &Vect_U.nX);
    printf("Veuillez saisir la deuxieme coordonnee du premier vecteur\n");
    scanf("%d", &Vect_U.nY);
    printf("Veuillez saisir la premiere coordonnee du deuxieme vecteur\n");
    scanf("%d", &Vect_V.nX);
    printf("Veuillez saisir la deuxieme coordonnee du deuxieme vecteur\n");
    scanf("%d", &Vect_V.nY);

    int addition(&Vect_U,Vect_V);
    printf("Votre vecteur UV a pour coordonnees: %d,%d\n", Vect_U.nX, Vect_U.nY);




    return 0;
}
