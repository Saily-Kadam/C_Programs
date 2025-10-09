/* Write a c program that points the following pattern using a while loop:
Accept n from the user. */
#include<stdio.h>
int main()
{
    int n =0;
    printf("Enter the number of rows");
    scanf("%d", &n);
    int i=0,j;
    while(i<n)
    {
        j =1;
        while(j<=n-i)
        {
            printf("%d\t",j);
            j++;
        }
         printf("\n");
        i++;
    }
    return 0;
}