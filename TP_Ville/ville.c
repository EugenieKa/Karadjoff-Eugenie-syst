#include "ville.h"
#include <stdio.h>
#include <stdlib.h>

Liste ville_initialiser(Liste l)
{
  return(NULL);
}

Liste ville_inserer_elt(Liste l, Element elt)
{
  Liste e;
  e = (Liste) malloc(sizeof(Element));
  if (e == NULL) {
    printf("Allocation memoire impossible\n");
    exit(1);
  }

  e->nom_ville[CHAR_MAX] = elt.nom_ville[CHAR_MAX];
  e->code_postal = elt.code_postal;
  e->suc = l;
  return (e);
}

void afficher_liste(Liste l)
{
  if(!l)
  {
    printf("Liste vide \n");
  }
  else
  {
    while(l != NULL)
    {
        printf("%s", l);
        l = l->suc;
    }
    printf("\n");
  }
}

int main()
{
  char ville[CHAR_MAX];
  long cp;
  Liste villes;
  Element elt;

  FILE *fichier = NULL;
  ville_initialiser(villes);


  fichier = fopen("./fic_ville.txt", "r");

  while(fichier != NULL)
  {

    fscanf(fichier, "%s", &elt.nom_ville);
    fscanf(fichier, "%ld", &elt.code_postal);
    ville_inserer_elt(villes, elt);
  }

  afficher_liste(villes);

  fclose(fichier);
  fichier = NULL;

 return 0;
}
