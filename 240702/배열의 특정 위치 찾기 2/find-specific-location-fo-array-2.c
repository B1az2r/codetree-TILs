#include <stdio.h>

int main(){
    
    int arr[10];
    int odd = 0;
    int even = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

        // 짝수번째
        if(i % 2 == 1){
            even += arr[i];
        }
        else if(i % 2 == 0){
            odd += arr[i];
        }
    }

    if(odd > even){
        printf("%d", odd - even);
    }
    else if(odd <= even){
        printf("%d", even - odd);
    }
    return 0;
}