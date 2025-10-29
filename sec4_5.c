//Sum all integers from 1 to n using a while loop.
#include<stdio.h>
int main()
{
    int n=0, sum=0;
    printf("Enter a number:");
    scanf("%d", &n);
    int i=1;
    while(i<=n){
        sum = sum+i;
        i++;
    }
    printf("The sum is: %d\n", sum);
    return 0;
}