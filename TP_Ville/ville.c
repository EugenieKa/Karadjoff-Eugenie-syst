#include "ville.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Liste villes_initialiser()
{
    Liste *l = malloc(sizeof(*Liste));
    Element *e = malloc(sizeof(*Element))

    if(l == NULL || e == NULL)
    {
        exit(1);
    }

    e->nom_ville[CHAR_MAX] = NULL;
    e->code_postal[CHAR_CODE]= NULL;
    l->tete = e;
    e_>suc = NULL;

    return(l);
}

void villes_inserer(Liste *l, char ville, char cp)
{
  Element *elt = malloc(sizeof(*elt));
  if (l == NULL || elt == NULL) {
    printf("Allocation memoire impossible\n");
    exit(1);
  }
  else
  elt->nom_ville[CHAR_MAX] = ville[CHAR_MAX];
  elt->code_postal[CHAR_CODE]= cp[CHAR_CODE];
  l->tete = elt;
  elt->suc = NULL;
}


void villes_afficher(Liste *l)
{
  if(!l)
  {
    printf("Liste vide \n");
    exit(1);
  }
  else
  {
      Element *elt = l->tete;
      while(elt)
        {
            printf("ville :%s\n", elt->nom_ville);
            printf("code postal :%s\n", elt->code_postal);
            elt = elt->suc;
      }
    printf("\n");
  }
}


int main()
{
  Liste *villes = villes_initialiser();
  FILE *fichier = NULL;
  char ville[CHAR_MAX];
  char cp[CHAR_CODE];


  fichier = fopen("./fic_ville.txt", "r");

  if(fichier == NULL)
  {
      puts("Fichier illisible\n");
      exit(1);
  }

  while(!feof(fichier))
  {
      fscanf(fichier, "%s\n", ville);
      strcpy(newville, ville);
      fscanf(fichier, "%s\n", cp);
      strcpy(newcp, cp);

      villes_inserer(villes, newville, newcp);
  }

  villes_afficher(villes);

  fclose(fichier);
  fichier = NULL;

 return 0;
}
