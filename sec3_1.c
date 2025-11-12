//Read three integers and find the largest among them
#include<stdio.h>
int main()
{
    int x=0,y=0,z=0;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x,&y,&z);
    printf("x = %d, y=%d, z=%d\n",x,y,z);
    if(x>y && x>z){
        printf("x is largest: %d\n", x);
    }
    else if(y>x && y>z){
        printf("y is largest: %d\n", y);
    }
    else if(z>x && z>y){
        printf("z is largest: %d\n", z);
    }
    else if(x==y && x>z){
        printf("x and y are equal and largest : %d\n", x);
    }
    else if(y==z && y>x){
        printf("y and z are equal and largest: %d\n", y);
    }
    else if(x==z && x>y){
        printf("x and z are equal and largest: %d\n", z);
    }
    else {
        printf("all the numbers are equal");
    }
    return 0;
}