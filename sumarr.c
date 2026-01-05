#include <stdio.h>

// Structure to store value and its original index
struct Pair {
    int value;
    int index;
};

int main() {

    struct Pair nums[] = {{2, 0}, {7, 1}, {11, 2}, {15, 3}};
    // Array storing numbers along with their original indices

    int target = 9;     // Target sum
    int n = 4;          // Number of elements

    struct Pair temp;   // Temporary variable for swapping

    // Bubble sort based on values
    for (int i = 0; i < n - 1; i++) {              
        for (int j = 0; j < n - i - 1; j++) {      
            if (nums[j].value > nums[j + 1].value) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    int left = 0;           // Pointer at start
    int right = n - 1;      // Pointer at end

    while (left < right) {

        int sum = nums[left].value + nums[right].value;
        // Calculate sum of values at left and right pointers

        if (sum == target) {
            printf("[%d, %d]\n", nums[left].index, nums[right].index);
            return 0;
        }
        else if (sum < target) {
            left++;        // Move left pointer right
        }
        else {
            right--;       // Move right pointer left
        }
    }

    return 0;   // Program ends
}