/*Accept integer n from user. Count down from n to 1,  but skip all numbers ending in 4. 
Use one loop and continue*/
#include <stdio.h>

int main() {
    int n;

    printf("Enter an integer n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        if (i % 10 == 4) {
            continue;  
        }
        printf("%d\n", i);
    }

    return 0;
}