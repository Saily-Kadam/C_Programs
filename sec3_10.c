// Input two numbers, and the maximum using the ternary operator.
/*#include<stdio.h>
int main()
{
    int i=0, j=0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &i, &j);
    i>j?printf("i = %d is greater\n", i):printf("j= %d is greater\n", j);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int i=0, j=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&i,&j);
    if(i==j){
        printf("Both the numbers are equal\n");
    }
    else{
        i>j?printf("i %d is maximum\n",i):printf("j %d is maximum\n",j);
    }
    return 0;
}