#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main() {
  struct Student student1;
  student1.age = 22;
  student1.gpa = 3.2;
  strcpy(student1.name,"Jim");
  strcpy(student1.major,"Business");

  printf("Name: %s\n",student1.name );
  printf("Major: %s\n",student1.major );
  printf("Age: %d y/o\n",student1.age );
  printf("GPA: %f\n",student1.gpa );

  return 0;
}
