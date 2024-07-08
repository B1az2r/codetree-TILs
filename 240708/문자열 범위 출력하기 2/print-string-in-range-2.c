#include <stdio.h>
#include <string.h>

int main(){

    char arr[101];
    int n;
    scanf("%s", arr);
    scanf("%d", &n);
    int len = strlen(arr);
    

    if(len < n){
        for(int i = len-1; i >= 0; i--){
            printf("%c", arr[i]);
        }
    }
    else{
        for(int i = len - 1; i >= len-n; i--){
            printf("%c", arr[i]);
        }
    }


    return 0;
}