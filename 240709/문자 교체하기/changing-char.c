#include <stdio.h>
#include <string.h>

int main(){

    char arr1[21];
    char arr2[21];

    scanf("%s %s", arr1, arr2);

    arr2[0] = arr1[0];
    arr2[1] = arr1[1];

    printf("%s", arr2);

    return 0;
}