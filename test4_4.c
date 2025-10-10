/*Write a c program to read n integers into dynamically allocated array. Then count the number of good 
pairs in this array. A pair (i,j) is called good if arr[i] == arr[j] and i<j*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n =0, good_count=0;
    printf("Enter the number of elements in an array");
    scanf("%d", &n);
    printf("Enter the array elements");
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i<j)
            {
                good_count = good_count+1;
                printf("%d, %d",i,j);
            }
        }
       }
printf("\n");
printf("%d",good_count);
free(arr);
return 0;
}