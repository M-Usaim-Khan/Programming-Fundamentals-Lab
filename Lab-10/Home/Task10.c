#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char names[5][20];
    FILE *fp;

    printf("Enter five employee names:\n");

    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

        names[i][strcspn(names[i], "\n")] = '\0';
    }


    fp = fopen("names.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++) {
        fprintf(fp, "%s\n", names[i]);
    }

    fclose(fp);

    fp = fopen("names.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    char search[20];
    char temp[20];
    int found = 0;

    printf("\nEnter a name to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    while (fgets(temp, sizeof(temp), fp) != NULL) {
        temp[strcspn(temp, "\n")] = '\0';

        if (strcmp(temp, search) == 0) {
            found = 1;
            break;
        }
    }

    fclose(fp);

    

    if (found)
        printf("Name found in directory.\n");
    else
        printf("Name not found.\n");

    return 0;
}
