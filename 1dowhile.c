//Read numbers until the user enters 0; compute and print their sum using a do-while loop. 
#include <stdio.h>

int main() {
    int num;
    int sum = 0;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}