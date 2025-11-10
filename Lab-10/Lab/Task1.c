#include <stdio.h>
#include <string.h>

int main(){

    printf("Enter a string: ");
    char string[20];

    fgets(string, sizeof(string), stdin);
    printf("The code word %s has %d characters", string, strlen(string)-1);
}

