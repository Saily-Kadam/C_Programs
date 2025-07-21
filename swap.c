#include<stdio.h>
int main()
{
    int a =0, b = 0, c=0;
    printf("Enter two numbers");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d", a, b);
    c=a;
    a=b;
    b=c;
    printf("a=%d, b=%d",a,b);
    return 0;
}