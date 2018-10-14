#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

Liste creer_liste_vide()
{
		return NULL;
}

int est_liste_vide(Liste liste)
{
		 return (liste==NULL) ;
}

Liste ajouter_liste(Liste liste, int x)
{
		Liste li;

		li = (Liste)malloc(sizeof(Maillon));
		li -> Elt = x ;
		li -> suiv = liste;

		return li ;
}

int tete_liste(Liste liste)
{
		return liste->Elt;
}

Liste queue_liste(Liste liste)
{
		return liste->suiv;
}
