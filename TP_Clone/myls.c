#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef WIN32
    #include <sys/types.h>
#endif

int main()
{
  DIR *repertoire = NULL;
  struct dirent *fichierAlire =  NULL;

  repertoire = opendir("./dir_example");

  if(repertoire == NULL)
  exit(1);

  fichierAlire = readdir(repertoire);

  while(fichierAlire)
  {
    printf("nom du fichier %s, numero inode %d\n", repertoire->d_name, repertoire->d_ino);
  }

  closedir(repertoire);
  repertoire = NULL;

 return 0;
}
