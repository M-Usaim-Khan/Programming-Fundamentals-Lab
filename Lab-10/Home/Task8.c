#include <stdio.h>

int main() {
    char names[3][20]; 

    printf("Enter names of three students:\n");

    for (int i = 0; i < 3; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\nList of Students\n");
    for (int i = 0; i < 3; i++) {
        printf("%s", names[i]);
    }

    return 0;
}
