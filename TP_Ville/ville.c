#include "ville.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Liste ville_liste_initialiser()
{
    return NULL;
}

Liste ville_liste_tete_inserer(Liste l, char nom, char cp)
{
    Liste p;
    p = (Liste) malloc(sizeof(Element));
    if (p == NULL)
        {
            printf("Allocation impossible...\n");
            exit(1);
        }

    p->nom_ville[CHAR_MAX] = nom;
    p->code_postal[CHAR_CODE] = cp;
    p->suc = l;

  return p;
}

Liste ville_liste_queue_inserer(Liste l, char nom, char cp)
{
    if(!l)
    {
      return ville_liste_tete_inserer(l, nom, cp);
    }

    Liste tete = l;
    Liste p;

    p = (Liste) malloc(sizeof(Element));

    if (p == NULL)
        {
            printf("Allocation impossible...\n");
            exit(1);
        }
    else
    {
        p->nom_ville[CHAR_MAX] = nom;
        p->code_postal[CHAR_CODE] = cp;
        p->suc = NULL;
    }

    while(l->suc)
    {
      l = l->suc;
    }

    l->suc = p;

  return tete;
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
    char nom[CHAR_MAX];
    char cp[CHAR_CODE];

    fichier = fopen("./fic_ville.txt", "r");

    if(fichier == NULL)
    {
        puts("Fichier illisible\n");
        exit(1);
    }

    while(!feof(fichier))
    {
        fscanf(fichier, "%s\n", nom);
        fscanf(fichier, "%s\n", cp);

        villes = ville_liste_queue_inserer(villes, nom[CHAR_MAX], cp[CHAR_CODE]);
    }

    ville_liste_afficher(villes);

    fclose(fichier);
    fichier = NULL;

 return 0;
}
