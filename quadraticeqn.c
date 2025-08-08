// accept two integer x, y and compute underroot 4x^2 + 8y^2 + x^3 +5 / 2x^2
#include<stdio.h>
#include<math.h>
int main()
{
    int x, y=0, root=0;
    printf("Enter the value of x and y");
    scanf("%d %d", &x, &y);
    root = sqrt((4*x*x)+(8*y*y)+(x*x*x)+5/2*x*x);
    printf("The value of given equation is: %d", root);
    return 0;
}