#include <stdio.h>
#include <stdlib.h>

int main() {

  //// Get int (age)
  // int age;
  // printf("Enter your age: ");
  // scanf("%d", &age);
  //
  // printf("You are %d y/o\n", age );
  //
  // return 0;


  //// Get double (gpa)
  // double gpa;
  // printf("Enter your gpa: ");
  // scanf("%lf", &gpa);
  //
  // printf("Your gpa is %lf\n", gpa );
  //
  // return 0;


  //// Get char (letter grade)
  // char grade;
  // printf("Enter your grade: ");
  // scanf("%c", &grade);
  //
  // printf("Your grade is %c\n", grade );
  //
  // return 0;


  //// Get string (name)
  char name[20];
  printf("Enter your name: ");
  fgets(name,20,stdin); //function is like scanf but syntax is like fgets(var,amount to store,stdin(aka standard input))

  printf("Your name is %s\n", name );

  return 0;
}
