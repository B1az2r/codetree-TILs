#include <stdio.h>

int main(){
    
    int arr[10];
    int cnt = -1;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(arr[i] == 0){
            break;
        }
        else if(arr[i] != 0){
            cnt++;
        }
    }
    for(int i = cnt; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}