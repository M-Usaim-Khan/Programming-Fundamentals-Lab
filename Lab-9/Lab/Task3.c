#include <stdio.h>

void DisplayMatrix(int arr[2][3]);
int CalculateSum(int arr[2][3]);
int CalculateAvg(int arr[2][3]);
int FindMax(int arr[2][3]);



int main(){

    int arr[2][3]= {
        {5,6,7},
        {1,2,3}
    };

    DisplayMatrix(arr);
    printf("Sum: %d\n", CalculateSum(arr));
    printf("Avg: %d\n", CalculateAvg(arr));
    printf("Max: %d\n", FindMax(arr));



}

void DisplayMatrix(int arr[2][3]){
    printf("\n----Displaying Matrix----\n");
    
    for (int i =0; i<2; i++){
        for (int j =0 ;j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int CalculateSum(int arr[2][3]){
    int sum = 0;
    for (int i =0; i<2; i++){
        for (int j =0 ;j<3; j++){
            sum += arr[i][j];
        }
    }
    return sum;

}

int CalculateAvg(int arr[2][3]){
    return CalculateSum(arr)/6;
}

int FindMax(int arr[2][3]){
    int max = arr[0][0];

    for (int i =0; i<2; i++){
        for (int j =0 ;j<3; j++){
            if (arr[i][j]> max){
                max = arr[i][j];
            }
        }
    }
    return max;

}