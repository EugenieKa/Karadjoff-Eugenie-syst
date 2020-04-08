#ifndef ville_h
#define ville_h

#define CHAR_MAX 10
#define CHAR_CODE 5

typedef struct Elt{
    char nom_ville[CHAR_MAX];
    char code_postal[CHAR_CODE];
    struct Elt *suc;
} Element;

typedef struct Elt* Liste;

Liste ville_liste_initialiser();

Liste ville_liste_tete_inserer(Liste l, Element elt);

void ville_liste_afficher(Liste l);


#endif
