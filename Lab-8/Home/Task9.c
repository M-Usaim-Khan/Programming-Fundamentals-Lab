#include <stdio.h>

int main(){

    int matrix[3][3];
    int result[3][3];
    int temp;

    for (int i = 0; i<3; i++){
        for (int j=0; j<3;j++){
            printf("enter data for matrix[%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix\n");
    for (int i = 0; i<3; i++){
        for (int j=0; j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i<3; i++){
        for (int j=0; j<3;j++){
            result[i][j] = matrix[j][i];
        }
    }

    for (int row= 0; row<3; row++){
        temp = result[row][0];
        result[row][0] = result[row][2];
        result[row][2] = temp;
    }




    printf("\nAfter Rotation\n");
    for (int i = 0; i<3; i++){
        for (int j=0; j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
