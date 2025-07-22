#include<stdio.h>
#include<math.h>
int main()
{
    int x=0, y=0,z=0;
    printf("Enter three numbers:");
    scanf("%d %d %d", &x, &y, &z);

    double tmp = sqrt(y*y-4*x*y);
    double N1 = -y+tmp;
    double N2 = -y+tmp;
    int d = 2*x;
    double x0 = N1/d;
    double x1 = N2/d;
    printf("x0=%f, x1=%f", x0,x1);
    return 0;

}