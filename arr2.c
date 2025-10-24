//Dynamically allocate and read an array of size n. Check if an array is a palindrome.
#include <stdio.h>   // For printf and scanf
#include <stdlib.h>  // For malloc and free

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);  // Read size of the array

    int* arr = (int*)malloc(n * sizeof(int)); 
     printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read elements into array
    }
 int isPalindrome = 1;  // Flag to check if array is palindrome (1 = yes, 0 = no)
    for (int i = 0; i < n / 2; i++) {  // Compare elements from start and end
        if (arr[i] != arr[n - i - 1]) {  // If mismatch found
            isPalindrome = 0;  // Not a palindrome
            break;  // Exit loop early
        }
    }
    if (isPalindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    free(arr);  // Free allocated memory
    return 0;   // End of program
}