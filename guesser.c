#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
  char userName[20];
  int guess = -999;
  int turns = 0;
  int keepGoing = true;

  srand(time(NULL));
  int correct = (rand() % 100) + 1;

  printf("Hello. what's your name? ");
  scanf("%s", userName);

  printf("Let's play a guessing game, %s \n", userName);

  while (keepGoing){
    turns++;
    printf("turn %d: Please enter your guess(number). ", turns);
    scanf("%d", &guess);

    if (guess < correct){
      printf ("Too low\n");
    } else if (guess > correct){
      printf ("Too high\n");
    } else {
      printf("You win! \n");
      keepGoing = false;
    } // ends if
  } // ends while

  return 0;}