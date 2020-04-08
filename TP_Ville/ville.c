#include "ville.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Liste ville_liste_initialiser()
{
    return NULL;
}

void ville_liste_inserer(Liste l, Element e)
{
   Liste l = (Liste) malloc(sizeof(Liste));
   Element e = malloc(sizeof(Element));

}

void ville_liste_afficher(Liste l)
{
    if(l)
    {
        printf("Liste vide \n");
        exit(1);
    }
    else
    {
      while(l)
        {
            printf("ville :%s\n", l->nom_ville);
            printf("code postal :%s\n", l->code_postal);
            l = l->suc;
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
      fscanf(fichier, "%s\n", elt.nom_ville);
      printf("%s\n", elt.nom_ville);

      fscanf(fichier, "%s\n", elt.code_postal);
      printf("%s\n", elt.code_postal);



  }

  fclose(fichier);
  fichier = NULL;

 return 0;
}
