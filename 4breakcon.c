//Find the first number greater than n that is divisible by 7. 
#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    n++;
    while (n % 7 != 0) {
        n++;
    }
    printf("The first number greater than the input that is divisible by 7 is: %d\n", n);

    return 0;
}