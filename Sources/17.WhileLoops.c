#include <stdio.h>
#include <stdlib.h>

int main() {
  // int index = 1;
  // // while(index < 10){
  // //   printf("%d\n",index);
  // //   index++;
  // // }
  //
  // do{
  //   printf("%d\n",index);
  //   index++;
  // }while(index < 10);

  int secretNumber = 5;
  int guess;

  int maximumAttempts = 3;
  int attempt = 0;

  while (attempt < maximumAttempts){
    printf("Enter Guess: ");
    scanf("%d",&guess);

    if(guess == secretNumber){
      printf("You Win");
      break;
    }
    attempt++;
  }

  if(guess != secretNumber){
    printf("You Lose");
  }
  return 0;
}
