#include <stdio.h>

int main() {
    int arr[3][3];
    int isUpper = 1, isLower = 1;

    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j && arr[i][j] != 0) {
                isUpper = 0;
            }
            if (i < j && arr[i][j] != 0) {
                isLower = 0;
            }
        }
    }

    if (isUpper && !isLower)
        printf("\nThe matrix is Upper Triangular.\n");
    else if (isLower && !isUpper)
        printf("\nThe matrix is Lower Triangular.\n");
    else if (isUpper && isLower)
        printf("\nThe matrix is both Upper and Lower.\n");
    else
        printf("\nThe matrix is Neither Upper nor Lower\n");

    return 0;
}
