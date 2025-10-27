#include <stdio.h>
int FindMax(int arr[],int s);

int main(){

    int arr[5] = {6,3,8,2,9};
    int s = sizeof(arr)/sizeof(arr[0]);

    printf("Max: %d\n",FindMax(arr,s));

}


int FindMax(int arr[], int size){
    int max = arr[0];

    for (int i =0; i<size; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}