#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char arr[1001];
    char inp[1001];

    scanf("%s", arr);
    scanf("%s", inp);

    int len_arr = strlen(arr);
    int len_inp = strlen(inp);
    int cnt = 0;

    for(int i = 0; i <= len_arr - len_inp; i++){
        bool match = true;

        for(int j = 0; j < len_inp; j++){
            if(arr[i+j] != inp[j]){
                match = false;
                break;                
            }
        }
        if(match){
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}