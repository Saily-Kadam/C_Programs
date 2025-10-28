//Dynamically allocate and read an array of size n. Find the maximum and minimum
//element in this array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0;
    printf("Enter the no. of elements in array:");
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];

    for(int i=0;i<=n-1;i++){
        if(arr[i]<min){
            min = arr[i]; 
        }
    }
        printf("Min: %d\n", min);
        for(int i=0;i<=n-1;i++){
            if(arr[i]>max){
            max = arr[i];
        }
    }
        printf("Max: %d\n", max);
    
    free(arr);
    return 0;
}