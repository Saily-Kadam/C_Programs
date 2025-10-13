/*Write a program to determine the discount a customer gets at a shop. The program should take the amount
(in rupees) that the customer spends the discount the customer will receive
Discount rules:
-If the amount is less than 50, the discount is 0%.
-If the amount is between 50 and 100 (inclusive), the discount is 10 %
-If the amount is between 101 and 200 (inclusive), the discount is 20 %
-If thr amount is greater than 200, the discount is 30 %*/
#include<stdio.h>
int main(){
    int n=0;
    printf("Enter the amount spent");
    scanf("%d", &n);

    if(n<50){
    printf("Discount = 0%%");
    }
    else if(n>=50 && n<=100){
        printf("Discount = 10%%");
    }
    else if(n>=101 && n<=200){
        printf("Discount = 20%%");
    }
    else{
        printf("Discount = 30%%");
    }
    return 0;
 }