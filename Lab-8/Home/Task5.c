#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows for the diamond: ");
    scanf("%d", &n);

// 1st half
    for (int i = 1; i <= n; i++) {

        for (int j = i; j < n; j++) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            (j%2)? printf("*"): printf(" ");
        }
        printf("\n");
    }

// 2nd halve
    for (int i = n - 1; i >= 1; i--) {

        for (int j = n; j > i; j--) {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            (j%2)? printf("*"): printf(" ");
        }
        printf("\n");
    }

    return 0;
}
