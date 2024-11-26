#include <stdio.h>

// Recursive function to calculate the sum of array elements
int sum_array(int arr[], int n) {
    // Base case: If the array is empty, return 0
    if (n == 0) {
        return 0;
    } else {
        // Recursive case: Add the last element to the sum of the remaining elements
        return arr[n - 1] + sum_array(arr, n - 1);
    }
}

int main() {
    // Declare and initialize an array
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calculate the sum using the recursive function
    int sum = sum_array(arr, n);

    // Print the calculated sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
