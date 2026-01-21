#include<stdio.h>
int main(){
    int n =0;
    int ans =0;
    int original = 0;
    printf("Enter a number");
    scanf("%d", &n);

    if(n<0){
        printf("False");
    }
    original = n ;
    while(n!=0){
        ans = ans*10 + (n%10);
        n/=10;
    }
    
    if(ans == original){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}