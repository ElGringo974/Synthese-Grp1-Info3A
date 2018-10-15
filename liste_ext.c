#include "liste.h"
#include <stdio.h>
#include <stdlib.h>


void afficher_liste(Liste li)
{
    if(est_liste_vide(li))
    {
        printf("Liste Vide \n");
        return;
    }
    while(li != NULL)
    {
        printf("[%d] ", li -> Elt);
        li = li -> suiv;
    }
}

