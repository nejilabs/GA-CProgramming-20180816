#include <stdio.h>
#include <stdlib.h>

int findMax(int number1, int number2){
  int result;
  if(number1>number2){
    result = number1;
  }else{
    result = number2;
  }

  return result;
}

int main() {
  int num1;
  int num2;

  printf("num1:");
  scanf("%d", &num1);

  printf("num2:");
  scanf("%d", &num2);

  printf("%d\n", findMax(num1,num2));
  return 0;
}
