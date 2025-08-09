//Read three integers and find the largest among them.
#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    
    int largest;

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

   
    printf("The largest number is: %d\n", largest);

    return 0;
}
