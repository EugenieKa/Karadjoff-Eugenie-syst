#ifndef ville_h
#define ville_h

#define CHAR_MAX 50
#define CHAR_CODE 6

typedef struct Elt{
    char nom_ville[CHAR_MAX];
    char code_postal[CHAR_CODE];
    struct Elt *suc;
} Element;

typedef struct Elt* Liste;

Liste ville_liste_initialiser();

Liste ville_liste_tete_inserer(Liste l, char nom, char cp);

Liste liste_queue_inserer(Liste l, char nom, char cp);

void ville_liste_afficher_tri(Liste l);

void ville_liste_afficher(Liste l);

Liste liste_liberer(Liste l);

#endif
