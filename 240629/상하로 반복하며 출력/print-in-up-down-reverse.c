#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int cnt = n+1;
    for(int i = 1; i <= n; i++){
        int ini = i;
        for(int j = 1; j <= n; j++){
            printf("%d", ini);
            ini = cnt - ini;
        }
        printf("\n");
    }
    
    return 0;
}