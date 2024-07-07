#include <stdio.h>
#include <string.h>


int main(){

    char arr[11][11];
    int cnt = 0;


    for(int i = 0; i < 10; i++){
        scanf("%s", arr[i]);
        cnt += strlen(arr[i]);
    }
    printf("%d\n", cnt);



    return 0;
}