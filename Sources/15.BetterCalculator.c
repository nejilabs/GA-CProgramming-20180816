#include <stdio.h>
#include <stdlib.h>

double calculate(double num1, double num2, char op){
  double result;
  // if (op == '+') {
  //   result = num1 + num2;
  // } else if(op == '-'){
  //   result = num1 - num2;
  // } else if(op == '*'){
  //   result = num1 * num2;
  // } else if(op == '/'){
  //   result = num1 / num2;
  // } else {
  //   printf("Invalid Operator");
  // }

  switch(op){
    case '+':
    result = num1 + num2;
    break;

    case '-':
    result = num1 - num2;
    break;

    case '*':
    result = num1 * num2;
    break;

    case '/':
    result = num1 / num2;
    break;

    default:
    printf("Invalid Operator");
    break;
  }

  printf("%f %c %f = ",num1, op, num2 );

  return result;
}

int main() {
  //things that we'll need
  double firstNumber;
  double secondNumber;
  char operator;

  //get firstNumber
  printf("First Number: ");
  scanf("%lf",&firstNumber);

  //get operator
  printf("Operator: ");
  scanf(" %c", &operator);

  //get secondNumber
  printf("Second Number: ");
  scanf("%lf",&secondNumber);

  //output Result
  printf("%f\n", calculate(firstNumber,secondNumber,operator));
  return 0;
}
