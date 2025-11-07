/*Write a C program to read n integers into a dynamically allocated array. Then count
 the number of good pairs in this array. A pair (i j) is called good if arr[i] == arr[j]
 and i < j.*/
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    int n=0, count =0;
    printf("Enter the numbers of elements in the array:");
    scanf("%d", &n);
    printf("Enter the elements is the array:");
    int* arr = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j] && i<j){
                count = count+1;
            }
        }
    }
    printf("Count= %d", count);
    free(arr);
    return 0;
 }