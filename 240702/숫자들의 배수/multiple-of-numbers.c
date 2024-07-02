#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int cnt = 0;
    int arr[100];
    arr[0] = n;

    for(int i = 1; i < 100; i++){
        printf("%d ", arr[0] * i);
        if((arr[0]*i) % 5 == 0){
            cnt++;
        }
        if(cnt == 2){
            break;
        }
    }


    return 0;
}