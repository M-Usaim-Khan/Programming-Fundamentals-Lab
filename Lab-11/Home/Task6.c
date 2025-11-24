#include <stdio.h>

int recursivePower(int num, int exponent){
    if (exponent == 1){
        return num;
    }
    return num*recursivePower(num,exponent-1);
}


int main(){
    int num, exp;
    printf("Enter a Number: ");
    scanf("%d",&num);

    printf("Enter exponent: ");
    scanf("%d",&exp);

    printf("Answer: %d", recursivePower(num,exp));

    return 0;

}