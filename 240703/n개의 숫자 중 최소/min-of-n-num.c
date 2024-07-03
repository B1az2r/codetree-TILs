#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[100];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int cnt = 0;
    int min = arr[0];

    for(int i = 1; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            cnt++;
        }
    }
    
    printf("%d %d", min, cnt);

    return 0;
}