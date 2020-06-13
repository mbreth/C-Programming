// Finding if user input is ODD or EVEN

#include <stdio.h>

int main() {
  int number;
  printf("Please enter a number: ");
  scanf("%i", &number);
  if (number % 2 == 0) {
    printf("Your number is even!");
  } else {
    printf("Your number is odd!");
  }

  return 0;
}
