#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);
    char even[100];
    int index = 0;

    for(int i = 1; i < len; i+=2){
        even[index++] = arr[i];
    }

    for(int i = index - 1; i >= 0; i--){
        printf("%c", even[i]);
    }

    
    return 0;
}