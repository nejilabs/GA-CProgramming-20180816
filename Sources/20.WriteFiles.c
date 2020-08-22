#include <stdio.h>
#include <stdlib.h>

/*
r - Read
w - write
a - append or add

FILE = datatype
fpointer = memory address

fopen() = open files
fclose = close files
*/
int main() {
  ////WRITE FILES
  // FILE * fpointer = fopen("employees.txt","w");
  // fprintf(fpointer, "Jim - Salesman \nPam - Receptionist \nOscar - Accounting");

  ////ADD TO FILE
  // FILE * fpointer = fopen("employees.txt","a");
  // fprintf(fpointer, "\nKelly - Customer Service");

  //READ FILE
  char line[255];
  FILE * fpointer = fopen("employees.txt","r");

  fgets(line,255,fpointer); //allows reading of lines in file one by one
  //fgets(where to store, size, file pointer)

  printf("%s\n",line );

  fclose(fpointer);
  return 0;
}
