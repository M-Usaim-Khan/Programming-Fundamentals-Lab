#include <stdio.h>

void calculate(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = *sum/2.0;

}

int main(){
    int a=5,b=10,sum;
    float avg;

    calculate(a,b,&sum, &avg);
    printf("Sum: %d\nAverage: %.2f\n", sum,avg);


}