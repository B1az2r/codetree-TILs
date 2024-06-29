#include <stdio.h>

int main(){
    
    int sum = 0;
    int arr[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);

    return 0;
}