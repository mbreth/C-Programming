// This is to demonstrate some basic usage of C programming

#include <stdio.h>

int main() {
    const int grade = 92;
    char gradeLetter;
    
    if (grade <= 100 && grade >= 90) {
        gradeLetter = 'A';
    } else if (grade <= 89 && grade >= 80) {
        gradeLetter = 'B';
    } else if (grade <= 79 && grade >= 70) {
        gradeLetter = 'C';
    } else if (grade <= 69 && grade >= 60) {
        gradeLetter = 'D';
    } else {
        gradeLetter = 'F';
    }
    
    switch (gradeLetter) {
        case 'A':
            printf("You did great to receive a %c!", gradeLetter);
            break;
            
        case 'B':
            printf("You did well to receive a %c!", gradeLetter);
            break;
            
        case 'C':
            printf("You did okay to receive a %c!", gradeLetter);
            break;
            
        case 'D':
            printf("You can do better. You received a %c!", gradeLetter);
            break;
            
        case 'F':
            printf("You did horrible and received a %c!", gradeLetter);
            break;
            
        default:
            printf("Grade doesnt exist");
            break;
    }
}
