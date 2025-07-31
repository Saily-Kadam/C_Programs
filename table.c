//Print the table of given number
#include<stdio.h>
int main()
{
    int n=0, table=0;
    printf("Enter a number:");
    scanf("%d",&n);

{
for(int i=1;i<=12;i++)
{
    table = n*i;
    printf("%d * %d = %d\n", n,i,table);
    
}
return 0;
}
}
   