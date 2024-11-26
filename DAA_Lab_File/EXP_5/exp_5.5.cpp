#include <stdio.h>

void multiplyMatrices(int *A, int *B, int *C, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(C + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(C + i * c2 + j) += *(A + i * c1 + k) * *(B + k * c2 + j);
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter the dimensions of matrix A (rows, columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the dimensions of matrix B (rows, columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2 || r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);1; 
        }
    }

    multiplyMatrices(&A[0][0], &B[0][0], &C[0][0], r1, c1, c2);

    printf("Product of the matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
