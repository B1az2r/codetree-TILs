#include <stdio.h>

void Modify(int *x, int n);

int main(){
    int n;
    scanf("%d", &n);

    int arr[51];
    int *x = arr;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    Modify(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}

void Modify(int *x, int n){
    
    for(int i = 0; i < n; i++){
        if(x[i] % 2 == 0){
            x[i] /= 2;
        }
    }
}