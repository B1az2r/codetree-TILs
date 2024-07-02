#include <stdio.h>

int main(){

    double arr[9];
    double sum = 0;

    for(int i = 0; i < 9; i++){
        scanf(" %lf ", &arr[i]);
        sum += arr[i];
    }
    printf("%.1lf", sum / 8);


    return 0;
}