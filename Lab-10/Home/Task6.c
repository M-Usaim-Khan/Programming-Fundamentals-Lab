
#include <stdio.h>
#include <string.h>

int main() {
    char username1[100];
    char username2[50];

    printf("Enter the first username: ");
    fgets(username1, sizeof(username1), stdin);
    username1[strcspn(username1, "\n")] = '\0';

    printf("Enter the second username: ");
    fgets(username2, sizeof(username2), stdin);
    username2[strcspn(username2, "\n")] = '\0';

    strcat(username1, username2);

    printf("Combined username: %s\n", username1);

    return 0;
}