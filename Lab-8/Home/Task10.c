#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        // Print spaces for alignment
        for (int j = i; j < n - 1; j++) {
            printf(" ");
        }

        int val = 1;  // first value in each row is always 1

        // Print numbers in current row
        for (int j = 0; j <= i; j++) {
            printf("%d ", val); // print value with space
            val = val * (i - j) / (j + 1); // compute next value using combination formula
        }

        printf("\n"); // move to next line after each row
    }

    return 0;
}
