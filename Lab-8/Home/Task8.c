#include <stdio.h>

int main(){
    int element;


    int matrix[3][3];
    int evenCount = 0, oddCount = 0;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i<3; i++){
        for (int j=0; j<3;j++){
            printf("enter value for matrix[%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i<3; i++){
        for (int j=0; j<3;j++){
            element = matrix[i][j];

            if (element % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
            if (element > 0) {
                positiveCount++;
            } else if (element < 0) {
                negativeCount++;
            } else {
                zeroCount++;
            }
        }
    }


    printf("\nEven elements: %d\n", evenCount);
    printf("Odd elements: %d\n", oddCount);
    printf("Positive elements: %d\n", positiveCount);
    printf("Negative elements: %d\n", negativeCount);
    printf("Zero elements: %d\n", zeroCount);

    return 0;

}