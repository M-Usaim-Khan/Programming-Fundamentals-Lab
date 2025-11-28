#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacity = 2;  
    int size = 0;     
    int *arr;

    arr = (int *)malloc(capacity * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation has failed\n");
        return 1;
    }

    printf("Enter integers (-1 to stop):\n");

    while (1) {
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);

        if (num == -1) 
            break;

        if (size == capacity) {
            capacity = capacity * 2; 

            int *temp = (int *)realloc(arr, capacity * sizeof(int));

            if (temp == NULL) {
                printf("Memory reallocation has failed\n");
                free(arr);
                return 1;
            }

            arr = temp;
        }

        arr[size] = num; 
        size++;
    }

    printf("\nYou have entered:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}