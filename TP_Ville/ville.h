#ifndef ville_h
#define ville_h

#define CHAR_MAX 10
#define CHAR_CODE 5

typedef struct Element Elt;
struct Element
{
    char nom_ville[CHAR_MAX];
    char code_postal[CHAR_CODE];
    Elt *suc;
};

typedef struct Liste Liste;
struct List
{
    Elt *tete;
};

Liste villes_initialiser();

void villes_inserer(Liste l, char ville, char cp);

void villes_liste_afficher(Liste l);


#endif
