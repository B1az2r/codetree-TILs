#include <stdio.h>
#include <stdlib.h>


void Real(int *arr, int size);

int main(){

    int n;
    scanf("%d", &n);
    int arr[50];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    Real(arr, n);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}

void Real(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = abs(arr[i]);
    }
}