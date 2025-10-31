#include <stdio.h>

float average(int a, int b, int c){
    return ((a+b+c)/3.0);
}


int main(){

    printf("Avg: %.2f", average(7,9,11));

}