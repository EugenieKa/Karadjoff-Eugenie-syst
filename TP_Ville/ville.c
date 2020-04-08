#include "ville.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Liste ville_liste_initialiser()
{
    return NULL;
}

Liste ville_liste_inserer(Liste l, Element elt)
{
    Element* e = malloc(sizeof(Element));
    if (e == NULL)
        {
            printf("Allocation impossible...\n");
            exit(1);
        }
    else
        {
            e->nom_ville[CHAR_MAX] = elt.nom_ville[CHAR_MAX];
            e->code_postal[CHAR_CODE]= elt.code_postal[CHAR_CODE];
            e->suc = l;
        }

    return(e);
}

void ville_liste_afficher(Liste l)
{
    Element *tmp = l;
    if(!tmp)
    {
        printf("Liste vide \n");
        exit(1);
    }
    else
    {
      while(tmp)
        {
            printf("ville :%s\n", tmp->nom_ville);
            printf("code postal :%s\n", tmp->code_postal);
            tmp = tmp->suc;
      }
    printf("\n");
  }
}


int main()
{
  Liste villes = ville_liste_initialiser();
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
      Element elt;
      fscanf(fichier, "%s\n", ville);
      strcpy(elt.nom_ville, ville);
      fscanf(fichier, "%s\n", cp);
      strcpy(elt.code_postal, cp);

      ville_liste_inserer(villes, elt);
  }

  ville_liste_afficher(villes);

  fclose(fichier);
  fichier = NULL;

 return 0;
}
