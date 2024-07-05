#include <stdio.h>

int main(){

    int arr[2][4];
    int sum = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }

    for(int i = 0; i < 2; i++){
        int row = 0;
        for(int j = 0; j < 4; j++){
            row += arr[i][j];
        }
        printf("%.1lf ", (double)row/4);
    }
    printf("\n");

    for(int i = 0; i < 4; i++){
        int col = 0;
        for(int j = 0; j < 2; j++){
            col += arr[j][i];
        }
        printf("%.1lf ", (double)col/2);
    }printf("\n");

    printf("%.1lf", (double)sum / 8);




    return 0;
}