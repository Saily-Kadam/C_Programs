// Accept two integer and compute the value of underroot 2x^2 +4y^2 +x^3 +10
#include<stdio.h>
#include<math.h>
int main()
{
    int x=0, y=0, res =0;
    printf("Enter the value of x and y");
    scanf("%d %d", &x, &y);
    printf("x = %d and y = %d\n", x, y);
    res = sqrt((2*x*x)+(4*y*y)+(x*x*x)+10);
    printf("The value is: %d\n", res);
    return 0;
}