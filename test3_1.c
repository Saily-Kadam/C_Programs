/*Using a while loop, iterate from 1 down to n (inclusive). For each number, display an output based on the 
following rules:
-If the number is divisible by both 3 and 5, print:"Epic Combo!"
-If the number is divisible by both 2 and 3 print:"FizzTwos!"
-If the number is divisible by 5 "Buzz Deep!"
-If the number is divisible by 3 only, print:"Fizz"
-If the number is divisible by neither 2,3, nor 5, print:"Chill"*/
#include<stdio.h>
int main()
{
    int n =0;
    printf("Enter a negative number");
    scanf("%d",&n);
    for(int i=-1;i>=n;i--){
    if(i%3==0 && i%5==0){
        printf("Epic Combo!\n");
    }
    else if(i%2==0 && i%3==0){
        printf("FizzTwos!\n");
    }
    else if(i%5==0){
        printf("Buzz Deep!\n");
    }
    else if(i%3==0){
        printf("Fizz\n");
    }
    else 
    printf("Chill\n");
}
    return 0;
}