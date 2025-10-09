/*write a c program that:
1. reads n integers into dynamically allocated array.
2. uses a for loop with if--else if--else conditions to count how manu numbers are
- positive, - negative and zero
3. uses nested loops to print all pairs of elements in the array where the sum of the pairs is positive*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n =0, i=0; int pos_count =0, neg_count=0, zero_count =0;
    printf("Enter the numbers of elements in an array");
    scanf("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    printf("Enter the elements of array");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    {
            if(arr[i]>0){
            pos_count = pos_count+1;
             }
            else if (arr[i]<0){
            neg_count = neg_count+1;
           }
            else
            zero_count = zero_count+1;
            
        } 
        
    }
        printf("Positive count:%d\n",pos_count);  
        printf("Negative count:%d\n",neg_count);    
        printf("Zero Count:%d\n",zero_count);
     for (int j=0;j<n;j++)
     {
        for (int k=j+1;k<n;k++){
            if(arr[j]+arr[k]>0)
            printf("(%d, %d)\n", arr[j], arr[k]);
        }
    }
     free(arr);
     return 0;
} 