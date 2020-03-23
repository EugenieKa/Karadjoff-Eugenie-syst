#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef WIN32
    #include <sys/types.h>
#endif

int main()
{
  DIR* repertoire = NULL;
  struct dirent* fichierAlire =  NULL;

  repertoire = opendir("./dir_example")

  if(repertoire == NULL)
  exit(1);

  while(repertoire)
  {
    fichierAlire = readdir(repertoire);
    printf("nom du fichier %s, numero inode %d", nom_fic, inode);
  }

 return 0;
}
