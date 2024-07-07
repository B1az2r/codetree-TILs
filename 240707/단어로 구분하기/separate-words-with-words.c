#include <stdio.h>

int main(){
    
    char arr[300];
    fgets(arr, 300, stdin);

    for(int i = 0; i < 300; i++){
        if(arr[i] == ' '){
            arr[i] = '\n';
        }
        if(arr[i] == '\0'){
            break;
        }
        printf("%c", arr[i]);
    }


    return 0;
}