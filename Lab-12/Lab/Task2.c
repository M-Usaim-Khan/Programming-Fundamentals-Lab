#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Memory allocated successfully\n");
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    free(ptr);
    free(ptr);
    printf("No effect using free twice");
    return 0;
}