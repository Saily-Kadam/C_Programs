#include <stdio.h>

int main() {
    double ans = 0.0;
    int n = 0;

    
    printf("Enter a number: ");
    scanf("%d", &n);  

    
    for (int i = 1; i <= n; ++i) {
        ans = ans + 1.0 / i;  
    }

    
    printf("Sum of reciprocals of first %d natural numbers = %f\n", n, ans);

    return 0;
}
