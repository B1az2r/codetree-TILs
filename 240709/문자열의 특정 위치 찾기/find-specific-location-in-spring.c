#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char arr[20];
    char x;
    scanf("%s %c", arr, &x);

    int len = strlen(arr);

    int index = -1;
    bool exist = false;

    for(int i = 0; i < len; i++){
        if(arr[i] != x){
            index++;
        }
        if(arr[i] == x){
            printf("%d", index+1);
            exist = true;
            break;
        }
    }
    if(exist == false){
        printf("No");
    }
    

    return 0;
}