#include <stdio.h>
#include <string.h>

int main() {
    char names[3][20];

    printf("Enter three names:\n");

    for (int i = 0; i < 3; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }

    printf("\n");


    for (int i = 0; i < 3; i++) {
        printf("Characters in Name %d:\n", i + 1);

        for (int j = 0; names[i][j] != '\0'; j++) {
            printf("%c ", names[i][j]);
        }
        printf("\n");
    }

    return 0;
}
