#include <stdio.h>
#include <string.h>

int main(){

    char arr[10][21];
    char x;
    int len = 0;
    int find = 0;

    for(int i = 0; i < 10; i++){
        scanf(" %s", arr[i]);
    }
    scanf(" %c", &x);
    
    for(int i = 0; i < 10; i++){
        len = strlen(arr[i]);
        if(arr[i][len-1] == x){
            printf("%s\n", arr[i]);
            find = 1;
        }
    }

    if(find == 0){
        printf("None");
    }
    
    return 0;
}