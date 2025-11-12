//Read an integer and determine whether it is odd or even also check if it is positive, negative, or zero.
#include<stdio.h>
int main()
{
    int i=0;
    printf("Enter a number:");
    scanf("%d",&i);
    if(i%2==0 && i>0){
        printf("Even and Positive number");
    }
    else if(i%2!=0 && i>0){
        printf("Odd and Positive number");
    }
    else if(i%2==0 && i<0){
        printf("Even and Negative number");
    }
    else if(i%2!=0 && i<0){
        printf("Odd and Negative number");
    }
    else {
        printf("The number is zero");
    }
    return 0;

}