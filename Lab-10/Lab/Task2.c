#include <stdio.h>
#include <string.h>

int main(){
    printf("Enter a string: ");
    char string[100];

    fgets(string, sizeof(string), stdin);
    int length = strlen(string);
    
    printf("Enter character to search in string: ");
    char ch;
    scanf(" %c", &ch);

    int i = strchr(string, ch) - string;
    if(i >= 0 && i < length){
        printf("Character %c found at index: %d", ch, i);
    } else {
        printf("Character %c not found in the string.", ch);
    }
}