#include <stdio.h>
int main() {
    int i, j, sp,n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(sp = i; sp < n; sp++) {
            printf("  "); 
        }
        for(j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}