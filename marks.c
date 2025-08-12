//  Read marks for five subjects and assign a grade based on percentage ranges (A/B/C/D/E/F).
#include <stdio.h>

int main() {
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

   
    printf("Enter marks for 5 subjects (out of 100 each):\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        
        if(marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks entered. Please enter values between 0 and 100.\n");
            return 1;
        }

        total += marks[i];
    }

   
    percentage = (total / 5.0);

    
    if(percentage >= 90) {
        grade = 'A';
    } else if(percentage >= 80) {
        grade = 'B';
    } else if(percentage >= 70) {
        grade = 'C';
    } else if(percentage >= 60) {
        grade = 'D';
    } else if(percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

   
    printf("\nTotal Marks = %d/500\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}
