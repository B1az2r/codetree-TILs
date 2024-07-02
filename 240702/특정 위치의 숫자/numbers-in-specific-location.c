#include <stdio.h>

int main(){
    
    int arr[10];
    int sum = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        if(i == 2 || i == 4 || i == 9){
            sum += arr[i];
        }
    }
    printf("%d", sum);


    return 0;
}