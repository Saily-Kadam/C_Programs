// Accept two integer 𝑥3  + 3𝑥2 + 4𝑥 −𝑦3
#include<stdio.h>
int main()
{
    int x =0 , y=0;
    printf("Enter value of x and y");
    scanf("%d %d",  &x ,&y);
    printf("the value of given equation is : %d", x*x*x + 3*(x*x) + 4*x - y*y*y);
    return 0;
}