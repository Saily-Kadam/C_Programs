// Dynamically allocate and read an array of size n. Find the sum and average of all elements in this array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,sum=0;
    float  avg=0;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    printf("The sum is: %d\n", sum);
    avg = sum/n;
    printf("Average is: %f\n", avg);
    free(arr);
    return 0;
}