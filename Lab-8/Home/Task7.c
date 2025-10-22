#include <stdio.h>

int main() {
    int n;
    printf("Enter order of square matrices (n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], result[n][n];
    int current_row[n], current_col[n];


    printf("\nEnter elements of first %dx%d matrix (A):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("\nEnter elements of second %dx%d matrix (B):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {

        // get a row
        for (int k = 0; k < n; k++) {
            current_row[k] = A[i][k];
        }

        for (int j = 0; j < n; j++) {
            // for tat row , get all columns
            for (int k = 0; k < n; k++) {
                current_col[k] = B[k][j];
            }

            // actual mutiplication
            int sum = 0;
            for (int k = 0; k < n; k++) {
                sum += current_row[k] * current_col[k];
            }

            result[i][j] = sum;
        }
    }


    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
