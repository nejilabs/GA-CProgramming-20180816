#include <stdio.h>
#include <stdlib.h>

void sayHi(){
  printf("Hello User\n");
}

void sayHiWithName(char name[]){
  printf("Hello %s\n",name);
}

void sayNameAndAge(char name[], int age){
  printf("Hello %s, you are %d years old!\n",name,age);
}

double cube(double num){
  double result = num * num * num;
  return result;
}

double cube2(double num);

int main(){
  sayHi();
  sayHiWithName("Nelly");
  sayHiWithName("nelly");
  sayHiWithName("Nelson");

  sayNameAndAge("Nelly", 20);

  printf("Cube Method 1 Result: %f\n",cube(3.0));
  printf("Cube Method 2 Result: %f\n",cube2(3.0));
  return 0;
}

double cube2(double num){
  double result = num * num * num;
  return result;
}
