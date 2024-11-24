#include <stdio.h>

#define ROWS_A 2 // Rows of matrix A
#define COLS_A 3 // Columns of matrix A
#define ROWS_B 3 // Rows of matrix B
#define COLS_B 2 // Columns of matrix B

int main() {
    int A[ROWS_A][COLS_A], B[ROWS_B][COLS_B], C[ROWS_A][COLS_B];
    int i, j, k;

    // Automatically populate matrix A with sequential values
    int value = 1; // Starting value
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_A; j++) {
            A[i][j] = value++;
        }
    }

    // Automatically populate matrix B with sequential values
    value = 1; // Reset starting value
    for (i = 0; i < ROWS_B; i++) {
        for (j = 0; j < COLS_B; j++) {
            B[i][j] = value++;
        }
    }

    // Initialize matrix C (resultant matrix) to 0
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_B; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_B; j++) {
            for (k = 0; k < COLS_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrix A
    printf("Matrix A (%d x %d):\n", ROWS_A, COLS_A);
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_A; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Print matrix B
    printf("\nMatrix B (%d x %d):\n", ROWS_B, COLS_B);
    for (i = 0; i < ROWS_B; i++) {
        for (j = 0; j < COLS_B; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Print resultant matrix C
    printf("\nResultant matrix C (%d x %d):\n", ROWS_A, COLS_B);
    for (i = 0; i < ROWS_A; i++) {
        for (j = 0; j < COLS_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
