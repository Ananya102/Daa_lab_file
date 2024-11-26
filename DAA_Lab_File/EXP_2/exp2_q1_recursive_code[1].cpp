#include <stdio.h>

int linearSearchRecursive(int arr[], int n, int x, int index) {
    if (index >= n) 
        return -1;
    if (arr[index] == x)
        return index;
    return linearSearchRecursive(arr, n, x, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int result = linearSearchRecursive(arr, n, x, 0);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result);

    return 0;
}

