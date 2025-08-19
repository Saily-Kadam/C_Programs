// Given a number, output "small" if less than 10, "large" if more than 10, "equal" if exactly 10. 
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (number < 10) {
        printf("small\n");
    } else if (number > 10) {
        printf("large\n");
    } else {
        printf("equal\n");
    }

    return 0;
}
