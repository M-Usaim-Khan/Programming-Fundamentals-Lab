#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

    arr = (int *)malloc(10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Initial values:\n");
    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("New values after modifying:\n");
    for (i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");



    return 0;
}
