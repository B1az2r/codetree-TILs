#include <stdio.h>

int main(){

    int arr[100];
    int cnt[10] = { 0, };

    for(int i = 0; i < 100; i++){
        scanf("%d", &arr[i]);

        if(arr[i] == 0){
            break;
        }

        arr[i] /= 10;
        cnt[arr[i]]++;
    }


    for(int i = 1; i < 10; i++){
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}