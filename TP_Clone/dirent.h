#ifndef _dirent
#define _dirent

#define CHAR_MAX 50
#define FIC_MAX 200

typedef struct Fic {
    char nom_fic[CHAR_MAX]
    int inode;
} Fichier;

typedef struct DIR {
  char nom_rep[CHAR_MAX]
  Fichier tab[FIC_MAX];
} DIR

struct dirent {

} Dirent ;

void opendir();

void readdir();

closedir();

#endif
