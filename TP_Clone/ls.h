#ifndef _myls
#define _myls

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

struct dirent{
  DIR[0]
} dirent

void opendir(DIR* nom_rep);

void readdir(DIR* nom_rep);

void closedir(DIR* nom_rep);

#endif
