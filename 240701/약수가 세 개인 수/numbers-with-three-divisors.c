#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int num = 0;

    for(int i = n; i <= m; i++){
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 3){
            num++;
        }
    }
    printf("%d\n", num);

    return 0;
}