#include "multiplication.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>

int multi_random()
{
  return rand()%10+1;
}

void multi_sortie()
{
  printf("Votre Score : %d\n", score);
  exit(0);
}

int main()
{
  int a, b, reponse;
  int score = 0;
  srand(time(NULL));

/** reste le sigaction à insérer **/

  while(1)
  {
    alarm(5);
    a = multi_random();
    b = multi_random();
    printf("Resultat de %d x %d ? \n", a, b);
    scanf("%d", &reponse)

    if(reponse == a*b)
    score++;
  }
  return 0;
}
