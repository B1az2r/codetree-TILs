#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    double avg = 0;
    double sum = 0;

    for(int i = 0; i < n; i++){
        double arr[i];
        scanf("%lf", &arr[i]);
        sum += arr[i];
        avg = sum / n;
    }
    printf("%.1lf\n", avg);
    if(avg >= 4.0){
        printf("Perfect");
    }
    else if(avg >= 3.0){
        printf("Good");
    }
    else{
        printf("Poor");
    }

    return 0;
}