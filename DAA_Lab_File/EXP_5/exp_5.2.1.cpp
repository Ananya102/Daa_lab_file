#include <stdio.h>
#include <stdlib.h>

void insert(int **arr, int *n, int pos, int value) {
    // Reallocate memory to accommodate the new element
    *arr = (int *)realloc(*arr, (*n + 1) * sizeof(int));

    // Shift elements to the right
    for (int i = *n - 1; i >= pos; i--) {
        (*arr)[i + 1] = (*arr)[i];
    }

    // Insert the value
    (*arr)[pos] = value;
    (*n)++;
}

void delete(int **arr, int *n, int pos) {
    // Shift elements to the left
    for (int i = pos; i < *n - 1; i++) {
        (*arr)[i] = (*arr)[i + 1];
    }

    // Reallocate memory to reduce the size
    *arr = (int *)realloc(*arr, (*n - 1) * sizeof(int));
    (*n)--;
}

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    int n = 5;

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    insert(&arr, &n, 2, 10);
    delete(&arr, &n, 3);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
