#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int counter = 0;
  int headsORtails = (rand() % 2) + 1;
  char userInput;
  printf("Type H for heads or T for tails: ");
  do {
    scanf("%c", &userInput);
    srand(time(NULL));
    printf("\t\t\t %d\n", counter);
    switch(userInput) {
      case 'h':
        if (headsORtails == 1) {
          printf("Correct!");
          counter++;
        } else {
          printf("Wrong!");
          counter++;
        }
        break;
      case 't':
        if (headsORtails == 1) {
          printf("Wrong!");
          counter++;
        } else {
          printf("Correct!");
          counter++;
        }
        break;
      default:
        printf("Incorrect guess");
        counter++;
        break;
    }
    printf("Guess again: ");
    scanf("%c", &userInput);
  } while (counter < 6);
  printf("\n\nEND.");
  return 0;
}
