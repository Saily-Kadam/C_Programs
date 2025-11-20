//even or odd
#include <stdio.h>

// Function to check even or odd
int isEven(int n) {
    if (n % 2 == 0)
        return 1;   // Even
    else
        return 0;   // Odd
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    return 0;
}