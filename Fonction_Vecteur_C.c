#include <stdio.h>
#include <stdlib.h>
#include "Tp_Vecteur_C_Header.h"

extern int addition(tVecteur *Vect_U,tVecteur Vect_V){

    (*Vect_U).nX= (*Vect_U).nX+Vect_V.nX;
    (*Vect_U).nY= (*Vect_U).nY+Vect_V.nY;

    return 0;
}
