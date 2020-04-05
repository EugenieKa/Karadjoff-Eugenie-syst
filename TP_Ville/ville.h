#ifndef _ville
#define _ville

#define CHAR_MAX 20
#define CHAR_CODE 5

typedef struct Elt {
  char nom_ville[CHAR_MAX];
  char code_postal[CHAR_CODE];
  struct Elt *suc;
} Element ;

typedef struct Elt *Liste;

Liste ville_inserer_elt(Liste l, Element elt);

void ville_liste_afficher(Liste l);

#endif
