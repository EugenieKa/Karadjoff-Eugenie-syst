#include "ville.h"
#include <stdio.h>
#include <stdlib.h>

/** fonction insertion d'element dans un liste d'elements **/
Liste ville_inserer_elt(Liste l, Element elt)
{
  Liste e;
  e = (Liste) malloc(sizeof(Element));
  if (e == NULL) {
    printf("Allocation memoire impossible\n");
    exit(1);
  }
  else
  e->nom_ville[CHAR_MAX] = elt.nom_ville[CHAR_MAX];
  e->code_postal[CHAR_CODE] = elt.code_postal[CHAR_CODE];
  e->suc = l;

  return (e);
}

/** fonction affichage de liste **/
void ville_liste_afficher(Liste l)
{
  if(!l)
  {
    printf("Liste vide \n");
    exit(1);
  }
  else
  {
    while(l != NULL)
    {
        printf("%s", l->nom_ville);
        printf("%s", l->code_postal);
        l = l->suc;
    }
    printf("\n");
  }
}

/** main qui lit le fichier - extraction des donnees pour les mettre dans une liste en cours **/
int main()
{
  Liste villes;
  FILE *fichier = NULL;
  Element elt;


  fichier = fopen("./fic_ville.txt", "r");

  if(fichier == NULL)
  printf("Fichier illisible\n");

  while(fichier != NULL)
    {
        fgets(elt.nom_ville, CHAR_MAX, fichier);
        printf("%s", elt.nom_ville);
        fgets(elt.code_postal, CHAR_CODE, fichier);
        printf("%s", elt.code_postal);
    }
/** cloture du programme en cours **/

  fclose(fichier);
  fichier = NULL;

 return 0;
}
