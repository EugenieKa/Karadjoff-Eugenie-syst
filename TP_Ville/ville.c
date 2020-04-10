#include "ville.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Liste ville_liste_initialiser()
{
    return NULL;
}

/** fonction insertion de la tete de liste **/
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

/** fonction insertion en queue de liste **/
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

/** fonction affichage de la liste **/
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

/** fonction affichage liste villes avec le meme cp **/
void ville_liste_afficher_tri(Liste l)
{
    if(!l)
    {
        printf("Liste vide \n");
        exit(1);
    }

    while(l)
    {
        if(strcmp(l->code_postal, l->suc->code_postal) == 0)
        {
            Liste p;
            Liste p2;

            p = (Liste) malloc(sizeof(Element));
            p2 = (Liste) malloc(sizeof(Element));

            if (p == NULL || p2 == NULL)
            {
                printf("Allocation impossible...\n");
                exit(1);
            }
            else
            {
               p->nom_ville[CHAR_MAX] = l->nom_ville[CHAR_MAX];
               p->code_postal[CHAR_CODE] = l->code_postal[CHAR_CODE];
               p->suc = p2;

               p2->nom_ville[CHAR_MAX] = l->suc->nom_ville[CHAR_MAX];
               p2->code_postal[CHAR_CODE] = l->suc->code_postal[CHAR_CODE];
               p2->suc = NULL;

               printf("code postal : %s", p->code_postal);
               printf("villes : %s", p->nom_ville);

               l = l->suc;
            }
        }
        else
        {
            l = l->suc;
        }

    }

}

/** fonction libération de la mémoire **/
Liste ville_liste_liberer(Liste l)
{
    Liste p = NULL;

    if(!l)
    {
        printf("Pas de liberation a faire");
    }
    else
    {
        while(l)
        {
            p->suc = l;
            free(l);
        }
    }
    return (p) ;
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

    ville_liste_afficher_tri(villes);

    ville_liste_liberer(villes);

    fclose(fichier);
    fichier = NULL;

 return 0;
}
