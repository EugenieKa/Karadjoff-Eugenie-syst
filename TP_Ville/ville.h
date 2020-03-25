#ifndef _ville
#define _ville

#define CHAR_MAX 50

typedef struct Elt {
  char nom_ville[CHAR_MAX];
  long code_postal;
  struct Elt *successeur;
} Element ;

typedef struct Elt *Liste;

Liste ville_liste_initialiser();

Liste ville_liste_inserer_elt();

#endif
