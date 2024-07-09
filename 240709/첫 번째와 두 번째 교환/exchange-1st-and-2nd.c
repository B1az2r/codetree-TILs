#include <stdio.h>
#include <string.h>

int main(){

    char arr[21];
    scanf("%s", arr);

    int len = strlen(arr);
    char arr_1 = arr[0];
    char arr_2 = arr[1];
    char temp1 = '#';
    char temp2 = '*';

    for(int i = 0; i < len; i++){
        if(arr[i] == arr_1){
            arr[i] = temp1;
        }

        if(arr[i] == arr_2){
            arr[i] = temp2;
        }
    }

    for(int i = 0; i < len; i++){
        if(arr[i] == temp1){
            arr[i] = arr_2;
        }
        if(arr[i] == temp2){
            arr[i] = arr_1;
        }
    }

    printf("%s", arr);

    return 0;
}