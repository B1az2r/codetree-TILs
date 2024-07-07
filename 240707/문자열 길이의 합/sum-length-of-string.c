#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    char arr[11][100];
    int cnt = 0;
    int len = 0;

    for(int i = 0; i < n; i++){
        scanf("%s", arr[i]);
        len += strlen(arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i][0] == 'a'){
            cnt++;
        }
    }
    
    printf("%d %d", len, cnt);

    return 0;
}