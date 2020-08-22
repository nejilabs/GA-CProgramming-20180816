#include <stdio.h>
#include <stdlib.h>

//%p = pointers (memory addresses)
int main() {
  int age = 30;
  int * pAge = &age; //pointer variables

  double gpa = 3.4;
  double *pGpa = &gpa;

  char grade = 'A';
  char * pGrade = &grade;

  printf("%p\n",&age);
  printf("age: %p\ngpa: %p\ngrade: %p\n",&age,&gpa,&grade);


  //Dereferencing pointers
  int number = 30;
  int *pNumber = &number;

  printf("%d\n",*pNumber );
  printf("%d\n",*&*&age );
  return 0;
}
