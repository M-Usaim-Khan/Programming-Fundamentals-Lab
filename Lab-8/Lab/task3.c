#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    int arr[n][n];
    int mainDiagonal = 0, secondaryDiagonal = 0, totalSum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        mainDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n - 1 - i];
    }

    totalSum = mainDiagonal + secondaryDiagonal;

    if (n % 2 != 0) {
        totalSum -= arr[n / 2][n / 2];
    }
    printf("\nSum of Main Diagonal: %d", mainDiagonal);
    printf("\nSum of Secondary Diagonal: %d", secondaryDiagonal);
    printf("\nTotal Sum of Both Diagonals: %d\n", totalSum);

    return 0;
}
