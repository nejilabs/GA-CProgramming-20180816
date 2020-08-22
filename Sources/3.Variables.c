#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  printf("3. Variables\n");

  //Basuc Data Types
    //Numbers
    int numberInt = 3;
    double numberDouble = 3.7; //64 bit double precision.
    float numberFloat = 3.7; //32 bit single precision

    //string
    char stringChar = 'S';
    char stringString[]= "I am a String";

    //constants
    const int NUM = 5;

    /*
      Printing syntax
      * %c - single character
      * %s - char[]
      * %d - int
      * %f - decimal/float
    */

  //Example 1
  char characterName[] = "John";
  int characterAge = 35;

  printf("%s\n",stringString);
  printf("%d\n",characterAge);
  printf("%f %f\n",numberDouble,numberFloat);

   // Example 2
   printf("My favourite %s is %d\n","number",500);

   // Example 3
   printf("%f\n", pow(2,3) );
   printf("%f\n", sqrt(36) );
   printf("%f\n", ceil(3.6) );
   printf("%f\n", floor(3.6) );
  return 0;
}

/*
clang main.c -o run
./run
*/
