#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *new_ptr;
    int i;

    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Initial memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    printf("Original array values:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    new_ptr = (int *)realloc(ptr, 10 * sizeof(int));

    free(ptr);

    printf("\nTrying to access memory after free():\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", new_ptr[i]);
    }
    printf("\n");

    return 0;
}
