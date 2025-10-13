/* Write a c program that:
1. Reads n integers into a dynanically allocated array.
2. Uses a for loop with if - else if--else conditions to count how many numbers are:
-positive
-negative
-zero
3. Uses nested loops to print all pairs of elements in the array where the sum of the pair is positive.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0, pos_count=0, neg_count =0, zero_count=0;
    printf("Enter the number of elements in an array");
    scanf("%d", &n);
    printf("Enter the elements of the array");
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos_count = pos_count +1;
        }
        else if(arr[i]<0){
            neg_count = neg_count +1;
        }
        else {
            zero_count = zero_count+1;
        }
    }
    printf("Positive Count: %d", pos_count);
    printf("Negative Count: %d",neg_count);
    printf("Zero count: %d",zero_count);

    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]>0) {
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    free(arr);
    return 0;
}