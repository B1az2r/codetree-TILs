#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Compare(char *arr);

int main(){
    char arr[100];
    scanf("%s", arr);

    if(Compare(arr)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    

    return 0;
}

bool Compare(char *arr){

    int len = strlen(arr);

    for(int i = 0; i < len; i++){
        if(arr[i] != arr[0]){
            return true;
        }
    }
    return false;
}