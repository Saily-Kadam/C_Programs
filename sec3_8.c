//Read two integers, compute their quotient and remainder if the second is nonzero
#include<stdio.h>
int main()
{
    int dividend=0, divisor=0;
    printf("Enter a dividend and divisor:");
    scanf("%d %d", &dividend,&divisor);
    if(divisor!=0){
        printf("Quotient: %d\n",dividend/divisor);
        printf("Remainder: %d\n",dividend%divisor);
    }
    else{
        printf("Division by zero is not allowed\n");         
    }
    return 0;
} 