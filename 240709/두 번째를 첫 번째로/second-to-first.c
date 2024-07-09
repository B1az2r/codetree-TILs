#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);

    char arr1 = arr[0];
    char arr2 = arr[1];

    for(int i = 0; i < len; i++){
        if(arr[i] == arr2){
            arr[i] = arr1;
        }
    }
    printf("%s", arr);

    

    return 0;
}