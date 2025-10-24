//Dynamically allocate and read an array of size n. Count the number of even and odd
// numbers in this array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0, even_cnt=0,odd_cnt=0;
    printf("Enter the number of elements in array:");
    scanf("%d", &n);
    printf("Enter the elements of the array:");
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_cnt= even_cnt+1;
        }
        else{
            odd_cnt = odd_cnt+1;
        }
    }
    printf("No. of even numbers: %d\n No of odd numbers: %d\n", even_cnt,odd_cnt);
    free(arr);
    return 0;
}