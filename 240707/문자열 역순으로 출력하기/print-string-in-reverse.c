#include <stdio.h>

int main(){
    
    char arr[4][20];

    for(int i = 0; i < 4; i++){
        scanf("%s", &arr[i]);
    }

    for(int i = 3; i >= 0; i--){
        printf("%s\n", arr[i]);
    }


    return 0;
}