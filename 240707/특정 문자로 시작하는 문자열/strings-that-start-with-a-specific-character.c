#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char arr[21][21];
    char x;
    int len = 0;
    int cnt = 0;
    int arr_len = 0;

    for(int i = 0; i < n; i++){
        scanf(" %s", arr[i]);
    }
    scanf(" %c", &x);
    
    for(int i = 0; i < n; i++){
        len = strlen(arr[i]);
        if(arr[i][0] == x){
            cnt++;
            arr_len += len;
        }
    }

    printf("%d %.2lf", cnt, (double)arr_len / cnt);


    return 0;
}