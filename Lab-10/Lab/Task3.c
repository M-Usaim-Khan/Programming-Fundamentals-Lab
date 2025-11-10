#include <stdio.h>
#include <string.h>

int main(){
    char s1[50], s2[50];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    printf("Enter n:");
    int n;
    scanf("%d", &n);

    if (n>strlen(s1) || n>strlen(s2)){
        printf("n cant be greater than a string length");
        return 1;

    }
    if (strncmp(s1,s2,n) == 0){
        printf("Same product category", n);
    } else {
        printf("Different product category", n);
    }

return 0;


}