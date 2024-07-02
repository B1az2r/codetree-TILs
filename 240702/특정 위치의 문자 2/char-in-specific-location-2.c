#include <stdio.h>

int main(){

    char arr[10];
    
    for(int i = 0; i < 10; i++){
        scanf("%c ", &arr[i]);

        if(i == 1){
            printf("%c ", arr[i]);
        }
        else if(i == 4){
            printf("%c ", arr[i]);
        }
        else if(i == 7){
            printf("%c ", arr[i]);
        }

    }

    return 0;
}