#include <stdio.h>
#include <string.h>

int main(){

    char arr1[21];
    char arr2[21];

    scanf("%s %s", arr1, arr2);

    int len1 = strlen(arr1);
    int len2 = strlen(arr2);

    if(len1 == len2){
        printf("same");
    }
    else if(len1 > len2){
        printf("%s %d", arr1, len1);
    }
    else{
        printf("%s %d", arr2, len2);
    }

    return 0;
}