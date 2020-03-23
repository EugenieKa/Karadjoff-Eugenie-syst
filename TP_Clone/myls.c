#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef WIN32
    #include <sys/types.h>
#endif

int main()
{
  DIR *repertoire;
  struct dirent *fichierAlire;

  repertoire = opendir("./dir_example");

  if(repertoire == NULL)
  exit(1);

  fichierAlire = readdir(repertoire);

  while(readdir(repertoire) != NULL)
  {
    printf("nom du fichier %s, numero inode %d\n", fichierAlire->d_name, fichierAlire->d_ino);
  }

  closedir(repertoire);
  repertoire = NULL;

 return 0;
}
