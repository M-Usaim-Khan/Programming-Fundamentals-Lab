#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int a = 10, b = 20;

    printf("Before Swapping\n");
    printf("a: %d\nb: %d\n", a,b);

    swap(&a,&b);

    printf("After Swapping\n");

    printf("a: %d\nb: %d", a,b);


}