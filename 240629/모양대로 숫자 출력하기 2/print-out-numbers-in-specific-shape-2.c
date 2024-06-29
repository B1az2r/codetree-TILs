#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int cnt = 2;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", cnt);
            cnt += 2;
            if(cnt % 10 == 0){
                cnt = 2;
            }
        }
        printf("\n");
    }

    return 0;
}