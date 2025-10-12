/*Write a c program that:
1.raeds n integers into a dynamically allocated array.
2. Uses a loop to calculate the average of the elements in the array.
3. Printd the average using a for loop*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0, sum=0, avg=0;
    printf("Enter the number of elements in an array");
    scanf("%d", &n);

    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements in an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        sum = sum+arr[i];
    }
    avg = sum/n;
    printf("The aerage of array elemets is :%d", avg);
free(arr);
return 0;
}