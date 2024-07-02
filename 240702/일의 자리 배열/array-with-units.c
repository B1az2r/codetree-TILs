#include <stdio.h>

int main(){

    int arr[11];
    int a, b;
    scanf("%d %d", &a, &b);

    arr[1] = a;
    arr[2] = b;
    printf("%d %d ", arr[1], arr[2]);
    

    for(int i = 3; i <= 10; i++){
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i] >= 10){
            arr[i] %= 10;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}