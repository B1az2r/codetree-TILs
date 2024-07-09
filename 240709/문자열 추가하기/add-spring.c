#include <stdio.h>
#include <string.h>

int main(){

    char arr[20];
    scanf("%s", arr);

    strcat(arr, "Hello");
    printf("%s", arr);

    return 0;
}