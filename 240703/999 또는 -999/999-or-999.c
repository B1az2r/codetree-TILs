#include <stdio.h>
#include <limits.h>

int main(){

    int min = INT_MAX;
    int max = INT_MIN;
    
    int arr[100];

    for(int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 999 || arr[i] == (-999)){
            break;
        }

        if(arr[i] < min){
            min = arr[i];
        }

        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("%d %d", max, min);

    return 0;
}