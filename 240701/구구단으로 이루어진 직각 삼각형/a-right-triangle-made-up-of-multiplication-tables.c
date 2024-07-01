#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int cnt = n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= cnt; j++){
            if(j < cnt){
                printf("%d * %d = %d / ", i, j, i*j);
            }
            else if(j == cnt){
                printf("%d * %d = %d\n", i, j, i*j);
            }
        }
        cnt--;
    }

    return 0;
}