#include <stdio.h>
#include <limits.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[10];
    int min = 100;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1]){
            if(arr[i+1] - arr[i] < min){
                min = arr[i+1] - arr[i];
            }
        }
    }
    printf("%d", min);

    
    return 0;
}