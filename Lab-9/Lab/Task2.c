#include <stdio.h>


int main(){
    int arr[5];

    for (int i = 0; i<5; i++){
        printf("Enter number: ");
        scanf("%d",&arr[i]);
    }




    int s = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i<s; i++){
        printf("array[%d] = %d\n",i, *(arr+i));

    }


}