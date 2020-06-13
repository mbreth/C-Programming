// This program demonstrates sending data into other functions

#include <stdio.h>

void checkName(char name[]);

int main() {
  char name[50];
  printf("Enter your name: ");
  scanf("%s",name);
  checkName(name);
}

void checkName(char name[]) {
  printf("Hello there ");
  puts(name);
}
