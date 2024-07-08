#include <stdio.h>
#include <string.h>

int main(){

    char arr[10];
    scanf("%s", arr);

    int len = strlen(arr);

    for(int i = 0; i < len; i++){
        printf("%c\n", arr[i]);
    }

    return 0;
}