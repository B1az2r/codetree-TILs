#include <stdio.h>

int main(){
    
    int arr[10];
    int i;

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        if(arr[i] % 3 == 0){
            printf("%d", arr[i-1]);
            break;
        }
    }

    return 0;
}