#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);

    for(int i = 0; i < len; i++){
        if(i % 2 == 1){
            printf("%c", arr[len-i]);
        }
    }

    return 0;
}