#include <stdio.h>

int square(int num);

int main(){
    int n;

    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("%d", square(n));

}

int square(int num){

    return num*num;

}