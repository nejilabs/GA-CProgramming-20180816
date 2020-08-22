#include <stdio.h>
#include <stdlib.h>

int main() {
  char color[20];
  char pluralNoun[20];
  char firstName[20];
  char lastName[20];

  printf("Enter a Color: ");
  scanf("%s",color);

  printf("Enter a Plural Noun: ");
  scanf("%s",pluralNoun);

  printf("Enter Name: ");
  scanf("%s%s",firstName, lastName);

  printf("Roses are %s\n", color);
  printf("%s are blue\n", pluralNoun);
  printf("I love %s %s\n", firstName, lastName);
  return 0;
}
