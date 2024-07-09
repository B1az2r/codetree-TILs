#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int main(){

    char arr[1001];
    char inp[1001];

    scanf("%s", arr);
    scanf("%s", inp);

    int len_arr = strlen(arr);
    int len_inp = strlen(inp);
    int cnt = -1;
    bool exist = false;

    for(int i = 0; i < len_arr - 1; i++){
        bool match = false;
        for(int j = 0; j < len_inp; j++){
            if(arr[i] == inp[j] && arr[i+1] == inp[j+1]){
                match = true;
                break;
            }
        }
        if(match){
            exist = true;
            cnt = i;
            break;
        }
    }

    if(exist == false){
        printf("-1");
    }
    else{
        printf("%d", cnt);
    }

    return 0;
}