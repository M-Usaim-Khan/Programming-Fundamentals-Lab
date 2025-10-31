#include <stdio.h>

int main(){
    int a=10;
    float b=1.89;
    char c = 'U';
    void *ptr;

    ptr = &a;
    printf("a: %d\n",*(int *)ptr);
    
    ptr = &b;
    printf("b: %.2f\n",*(float *)ptr);

    ptr = &c;
    printf("c: %c\n",*(char *)ptr);
}