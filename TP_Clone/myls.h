#ifndef _myls
#define _myls

#define CHAR_MAX 50
#define TAILLE_MAX 200

typedef struct DIR {
  char d_name[CHAR_MAX];
  int d_inode;
} DIR

void opendir(DIR* nom_rep);

void readdir(DIR* nom_rep);

void closedir(DIR* nom_rep);

#endif
