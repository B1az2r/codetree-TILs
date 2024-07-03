#include <stdio.h>

int main(){

    int min = 1;
    int max = 1000;

    int arr[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        if(arr[i] > 500 && arr[i] < max){
            max = arr[i];
        }
        else if(arr[i] < 500 && arr[i] > min){
            min = arr[i];
        }
    }
    printf("%d %d", min, max);



    return 0;
}