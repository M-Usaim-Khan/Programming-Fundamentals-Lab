
#include <stdio.h>
#include <string.h>

int main() {
    char password1[100];
    char password2[100];

    printf("Enter the password: ");
    fgets(password1, sizeof(password1), stdin);
    password1[strcspn(password1, "\n")] = '\0';

    printf("Enter the password for confirmation: ");
    fgets(password2, sizeof(password2), stdin);
    password2[strcspn(password2, "\n")] = '\0';

    if (strcmp(password1, password2) == 0) {
        printf("Password Matched\n");
    } else {
        printf("Passwords do not match.\n");
    }

    return 0;
}