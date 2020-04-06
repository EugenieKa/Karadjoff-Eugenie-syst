#include "ville.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



Liste ville_liste_initialiser()
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
  else
  e->nom_ville[CHAR_MAX] = elt.nom_ville[CHAR_MAX];
  e->code_postal[CHAR_CODE]= elt.code_postal[CHAR_CODE];
  e->suc = l;

  return (e);
}


void ville_liste_afficher(Liste l)
{
  if(!l)
  {
    printf("Liste vide \n");
    exit(1);
  }
  else
  {
    while(l)
    {
        printf("%s", l->nom_ville);
        printf("%s\n", l->code_postal);
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

  char word[256];


  fichier = fopen("./fic_ville.txt", "r");

  if(fichier == NULL)
  {
      puts("Fichier illisible\n");
      exit(1);
  }

  /** extraction mot à mot en cours **/
  while(!feof(fichier))
  {
       fscanf(fichier, "%s", word);
       printf("%s\n", word);
       strcpy(elt.nom_ville, word);

  }

/**
    ville_liste_afficher(villes);
**/
    fichier = NULL;

 return 0;
}
