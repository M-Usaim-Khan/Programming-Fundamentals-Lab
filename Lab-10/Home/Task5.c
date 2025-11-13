
#include <stdio.h>
#include <string.h>

int main(){
    char message[200];
    char backup[200];

    printf("Enter a message: ");
    fgets(message, sizeof(message), stdin);

    strcpy(backup, message);

    // Display both messages
    printf("Original Message: %s\n", message);
    printf("Backup Message: %s\n", backup);

    return 0;
}