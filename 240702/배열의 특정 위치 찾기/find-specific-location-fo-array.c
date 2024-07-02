#include <stdio.h>

int main(){

    int arr[10];
    int sum1 = 0;
    int sum2 = 0;
    int cnt = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        if(i % 2 == 1){
            sum1 += arr[i];
        }

        if(i % 3 == 2){
            sum2 += arr[i];
            cnt++;
        }
    }
    double avg = (double)sum2 / cnt;

    printf("%d %.1lf", sum1, avg);

    return 0;
}