#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int cnt = 1;

    for(int i = n; i >= 1; i--){
        for(int j = n; j >= 1; j--){
            if(j > i){
                printf("  ");
        }
            else{
                printf("%d ", cnt);
                cnt++;
            }
            if(cnt == 10){
                cnt = 1;
            }
        }
        printf("\n");
    }


    return 0;
}