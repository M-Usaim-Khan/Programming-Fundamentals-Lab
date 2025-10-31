#include <stdio.h>

void add(int a ,int b){printf("%d",a+b);}
void subtract(int a ,int b){printf("%d",a-b);}
void divide(int a ,int b){printf("%.2f",(float)a/b);}
void multiply(int a ,int b){printf("%d",a*b);}


int main(){
    void (*func_ptrs[4])(int,int) = {add,subtract,multiply,divide};
    int choice, a,b;

    printf("Enter Num1: ");
    scanf("%d", &a);
    printf("Enter Num2: ");
    scanf("%d", &b);
    printf("0 - Add\n1 - Subtract\n2 - Multiply\n3 - Divide\nEnter Choice: ");
    scanf("%d", &choice);

    if(choice>=0 && choice <=3){
        func_ptrs[choice](a,b);
    } else{
        printf("invalid Choice");
    }


}