#include <stdio.h>
#include <string.h>


int main(){

    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);

    arr[1] = 'a';
    arr[len-2] = 'a';

    printf("%s", arr);

    

    return 0;
}