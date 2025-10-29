//Dynamically allocate and read an array of size n. Print the array in reverse order.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("Enter the number of elements in an array:");
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the number of elements in an array:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("Original Array:");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Reversed Array:");
    for(int i=n-1;i>=0;i--){
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}