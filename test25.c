/*write a program that: - reads the daily temperature for 7 days. - uses a for loop to process each day's 
temperature. -inside the loop, uses a nested if { else if structure to classify: 
- if temp>= 35, print "very hot", else if temp>= 25, print warm, else if temp>= 15 print "cool" 
else print "cold" c program*/
#include <stdio.h>

int main() {
    int temps[7];
    int i;

    printf("Enter temperatures for 7 days:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &temps[i]);
    }

    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        if (temps[i] >= 35) {
            printf("very hot\n");
        } else if (temps[i] >= 25) {
            printf("warm\n");
        } else if (temps[i] >= 15) {
            printf("cool\n");
        } else {
            printf("cold\n");
        }
    }

    return 0;
}