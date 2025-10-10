/*Write a c program to 
1. Reads n integers into a dynamically allocated array
1. Perform the following on the array:
i. replace each even number with 0.
ii. replace each odd numbers with 1.
iii. sort the modified array in non-decreasing order*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n =0, max_index=0;
    printf("Entre the number of elements in the array");
    scanf("%d", &n);
    printf("Enter the elements in the array");
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
        printf("%d", arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        max_index =j;
        for(int k=j+1;k<n;k++)
        {
            if(arr[k]>arr[j])
            max_index =k;
        }
        int temp = arr[j];
        arr[j] = arr[max_index];
        arr[max_index]= temp;
    }
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d", arr[i]);
    free(arr);
    return 0;
}