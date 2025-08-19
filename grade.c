// Read a grade character and print remarks based on the grade using switch-case. 
#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);  
    if (grade >= 'a' && grade <= 'z') {
        grade = grade - ('a' - 'A');
    }

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Very Good!\n");
            break;
        case 'C':
            printf("Good.\n");
            break;
        case 'D':
            printf("Needs Improvement.\n");
            break;
        case 'F':
            printf("Failing Grade.\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}
