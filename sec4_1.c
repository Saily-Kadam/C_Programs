//Print all even numbers between 1 and n (user input) using a for loop.
#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}