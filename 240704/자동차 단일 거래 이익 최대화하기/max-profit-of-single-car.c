#include <stdio.h>
#include <limits.h>



int main(){

    int n;
    scanf("%d", &n);
    int arr[1000];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int max = INT_MIN;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
            max = min;
        }

        if(arr[i] > max){
            max = arr[i];
            cnt = (cnt < max - min) ? max-min : cnt;
        }
    }
    printf("%d", cnt);
    
    return 0;
}