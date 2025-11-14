#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int id1, id2, id3;

    fp = fopen("library.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter three book IDs:\n");
    scanf("%d %d %d", &id1, &id2, &id3);


    fprintf(fp, "%d %d %d\n", id1, id2, id3);

    fclose(fp);


    fp = fopen("library.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    int r1, r2, r3;
    fscanf(fp, "%d %d %d", &r1, &r2, &r3);
    fclose(fp);

    printf("\nBook IDs read from file:\n");
    printf("%d %d %d\n", r1, r2, r3);

    return 0;
}
