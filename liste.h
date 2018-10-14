#ifndef	LISTE
#define LISTE

//typedef int data ;

typedef struct zMaillon {
	int Elt ;
	struct zMaillon *suiv ;
} Maillon, * Liste ;

Liste creer_liste_vide();
int est_liste_vide(Liste liste);
Liste ajouter_liste(Liste liste, int x);
int tete_liste(Liste liste);
Liste queue_liste(Liste liste);

#endif
