#include <stdio.h>

int recursivePower(int num, int exponent,int timesCalled){
    if (exponent == 1){
        printf("Total Calls: %d\n",timesCalled+1);

        return num;
    }
    printf("Call Number: %d\n",timesCalled+1);
    return num*recursivePower(num,exponent-1,timesCalled+1);

}


int main(){
    int num, exp;
    printf("Enter a Number: ");
    scanf("%d",&num);

    printf("Enter exponent: ");
    scanf("%d",&exp);
    
    int timesCalled = 0;

    printf("Answer: %d", recursivePower(num,exp,timesCalled));

    return 0;

}