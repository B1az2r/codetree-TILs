#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[10];
    int min = 100;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++){  
        int diff = arr[i+1] - arr[i];
        if(diff < min){
            min = diff;
        }
    }
    printf("%d", min);

    return 0;
}