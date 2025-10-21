#include <stdio.h>

int main(){
    int arr[3][3];

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            printf("Enter value for array[%d][%d]: ",i,j,arr[i][j]);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (int i=0; i<3; i++){
        for (int j = 0; j<3; j++){
            if (arr[i][j] != arr[j][i]){
                printf("Not Symmetric");
                return 0 ;
            }
        }
    }
    printf("Symmetric");

}