#include <stdio.h>

int main(){

    double arr[10];
    double cnt = 0;
    double sum = 0;


    for(int i = 0; i < 10; i++){
        scanf(" %lf", &arr[i]);
        if(arr[i] < 250){
            sum += arr[i];
            cnt++;
        }
        else if(arr[i] >= 250){
            break;
        }
    }
    double avg = sum / cnt;
    printf("%.lf %.1lf", sum, avg);

    return 0;
}