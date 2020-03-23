#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <setjmp.h>

int random()
{
  return rand()%10+1;
}

int catch_signal(int sig, void (*handler)(int))
{
  structure sigaction action;
  action.sa_handlher = handler;
  sygemptyset(&action.sa_mask);
  action.sa_flags = 0;
  return sigaction(sig, action, NULL);
}

void sortie(int sig)
{
  printf("Votre Score : %d\n", score);
  exit(0);
}

void alarm(int sig)
{
  printf("Temps ecoule");
  raise(SIGINT);
}

int main()
{
  int a, b, reponse;
  int score = 0;
  srand(time(NULL));

  catch_signal(SIGQUIT, sortie);
  catch_alarm(SIGINT, alarm);

  while(1)
  {
    alarm(5);
    a = random();
    b = random();
    printf("Resultat de %d x %d ? \n", a, b);
    scanf("%d", &reponse)

    if(reponse == a*b)
    score++;
  }
  return 0;
}
