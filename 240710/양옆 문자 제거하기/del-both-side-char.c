#include <stdio.h>
#include <string.h>

int main(){

    char arr[101];
    scanf("%s", arr);
    int len = strlen(arr);

    for(int i = 1; i < len-1; i++){
        arr[i] = arr[i+1];
    }
    arr[len - 1] = '\0';
    len--;

    for(int i = len - 2; i < len-1; i++){
        arr[i] = arr[i+1];
    }
    arr[len - 1] = '\0';
    len--;


    printf("%s", arr);



    return 0;
}