//count frequency of each element in array
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == visited)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = visited;  
            }
        }

        printf("%d -> %d times\n", arr[i], count);
    }

    return 0;
}