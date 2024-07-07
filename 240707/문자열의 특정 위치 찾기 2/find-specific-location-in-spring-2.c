#include <stdio.h>

int main(){

    char arr[5][20] = {"apple", "banana", "grape", "blueberry", "orange"};
    char x;
    scanf("%c", &x);
    int cnt = 0;

    for(int i = 0; i < 5; i++){
            if(arr[i][2] == x || arr[i][3] == x){
                printf("%s\n", arr[i]);
                cnt++;
            }
    }

    printf("%d", cnt);
    return 0;
}