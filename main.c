#include <stdio.h>
#include "liste.h"
#include "liste_ext.h"


void trie_aux(Liste L)
{
    int tamp;
    tamp = L ->Elt;
    L->Elt = L->suiv->Elt;
    L->suiv->Elt=tamp;
}



void trie(Liste L)
{
    int tri;
    int *pt1;

    pt1=L;  //Pt debut liste

 // Test si liste vide //
    if (L == NULL)
        return;

    do
    {
        tri = 0;
        L=pt1;
        while (L->suiv != NULL)
        {
            if (L->Elt > L->suiv->Elt)
            {
                trie_aux(L);
                tri = 1;
            }
            L = L->suiv;
        }
    }
    while (tri);
}


int trie_grp1()
{

	Liste l ;
	int *pt;
	l = ajouter_liste (creer_liste_vide(), 1) ;
    l = ajouter_liste(l,2);
    l = ajouter_liste(l,3);
    l = ajouter_liste(l,4);
    l = ajouter_liste(l,5);
    printf("Liste av : \n");

    afficher_liste(l);
    printf("\n");

    pt=l;
    trie(l);
    printf("Liste apres tri : \n");
    afficher_liste(pt);

	return 0;
}

int main()
{
    trie_grp1();
    return 0;
}
