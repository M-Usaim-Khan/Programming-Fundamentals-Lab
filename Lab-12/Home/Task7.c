#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, *new_ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed (malloc)\n");
        return 1;
    }

    printf("ptr address: %p\n", ptr);

    new_ptr = (int *)realloc(NULL, 10 * sizeof(int));

    if(new_ptr == NULL) {
        printf("Memory allocation failed (realloc with NULL)\n");
    } else {
        printf("new_ptr address: %p\n", new_ptr);
        printf("realloc(NULL, size) behaves like malloc()\n");
    }

    free(ptr);
    free(new_ptr);

    return 0;
}
