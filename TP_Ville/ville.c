#include "ville.h"
#include <stdio.h>
#include <stdlib.h>

Liste ville_liste_initialiser()
{
  return(NULL);
}

Liste ville_liste_inserer_elt(Liste l, Element elt)
{
  Liste v;
  v = (Liste) malloc(sizeof(Element));
  if (v == NULL) {
    printf("Allocation memoire impossible\n");
    exit(1);
  }
  v->val = elt;
  v->suc = l;
  return (v);
}

int main()
{
  char ville[CHAR_MAX];
  long cp;

  villes.ville_liste_initialiser();

  FILE* fichier = NULL;
  fichier = fopen("./villes.txt", "r");

  while(fscanf(fichier)!= NULL)
  {
    Liste villes;
    Element elt;
    fgets(fichier, "%s", &ville);
    fgets(fichier, "%ld", &cp);
    strcopy(ville, elt.ville);
    strcopy(cp, elt.code_postal);
    ville_liste_inserer_elt(villes, elt);
  }

  fclose(fichier);
  fichier = NULL;

 return 0;
}
