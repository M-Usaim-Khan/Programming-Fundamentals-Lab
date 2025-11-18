#include <stdio.h>

int recursive_sum(int n){
    if (n<=9 && n>=0){
        return n;
    }
    int d = n%10;
    n = n/10;
    return d+recursive_sum(n);
}

int main(){
    printf("%d",recursive_sum(43872));
}