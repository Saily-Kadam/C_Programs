//Accept two integers xy and compute: x3 + 3x2 + 4x-y3, under root x3 +3x2 +4x-y3, and under root x3 +3x2 +4x-y3
//by 2 x square (use math.h header file)
#include<stdio.h>
#include<math.h>
int main()
{
    int x=0, y=0;
    double exp1, exp2, exp3;
    printf("There the value of x and y: ");
    scanf("%d %d", &x, &y);
    
    exp1 = pow(x,3) + 3 * pow(x,2) +4*x - pow(y, 3);
    exp2 = sqrt(exp1);
    exp3 = exp2/(2*(x,2));

    printf("Expression 1: %f\n", exp1);
    printf("Expression 2: %f\n", exp2);
    printf("Expression 3: %f\n", exp3);
    return 0;
}
