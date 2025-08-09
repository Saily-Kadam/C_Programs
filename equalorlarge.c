// Read two integers and check if they are equal, or determine which is larger. 
#include<stdio.h>
int main()
{
    int i, j=0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &i, &j);
    printf("x = %d, y=%d\n", i, j);
    if(i==j)
    printf("Equal numbers\n");
    else if (i>j)
    printf("i is greater\n");
    else
    printf("j is greater\n");
    return 0;
}