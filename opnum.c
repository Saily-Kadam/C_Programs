// Use nested conditional operators to classify a number as positive/negative/zero.
#include <stdio.h>

int main() {
    int num;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    
    (num > 0) ? printf("Positive\n") :
    (num < 0) ? printf("Negative\n") :
                printf("Zero\n");

    return 0;
}
