#include "ville.h"
#include <stdio.h>
#include <stdlib.h>

Liste ville_liste_initialiser()
{

}

Liste ville_liste_teteinserer(Liste l, int e)
{

}

Liste ville_liste_queue_inserer(Liste l, int e)
{

}

int main()
{
  Liste villes;
  
  FILE* fichier = NULL;

  fichier = fopen("./villes.txt", "r");

  while(fscanf(fichier)!= NULL)
  {


  }

  fclose(fichier);
  fichier = NULL;

 return 0;
}
