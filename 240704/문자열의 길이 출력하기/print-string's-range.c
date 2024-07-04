#include <stdio.h>

int main(){

    char arr1[100];
    char arr2[100];

    scanf("%s", arr1);
    scanf("%s", arr2);

    int len1;
    int len2;

    for(int i = 0; i < 100; i++){
        if(arr1[i] == '\0'){
            len1 = i;
            break;
        }
    }

    for(int i = 0; i < 100; i++){
        if(arr2[i] == '\0'){
            len2 = i;
            break;
        }
    }
    printf("%d", len1+len2);

    return 0;
}