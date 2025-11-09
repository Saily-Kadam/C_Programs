//Accept an integer x and compute: x2 and x2 +2x
#include<stdio.h>
int main()
{
    int x=0, r1=0, r2=0;
    printf("Enter a value of x:\n");
    scanf("%d", &x);
    
    r1 = x*x;
    r2 = r1 + 2*x;
    printf("x^2: %d\n", r1);
    printf("x^2 + 2x: %d\n", r2);
    return 0;
}