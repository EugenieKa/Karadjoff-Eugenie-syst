#ifndef _ville
#define _ville

#define CHAR_MAX 50
#define

typedef struct Elt {
  char ville[CHAR_MAX];
  long code_postal;
  struct element *successeur;
} Element ;

typedef struct Elt *Liste;

Liste ville_liste_initialiser();

Liste ville_liste_teteinserer(Liste l, int e);

Liste ville_liste_queue_inserer(Liste l, int e);

#endif
