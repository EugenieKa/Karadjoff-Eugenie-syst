#ifndef _ville
#define _ville

#define CHAR_MAX 50

typedef struct Elt {
  char nom_ville[CHAR_MAX];
  long code_postal;
  struct Elt *suc;
} Element ;

typedef struct Elt *Liste;

Liste ville_initialiser(Liste l);

Liste ville_inserer_elt(Liste l, Element elt);

void liste_afficher(Liste l);

#endif
