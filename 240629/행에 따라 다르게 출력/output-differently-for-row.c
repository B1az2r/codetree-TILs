#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int num = 1;

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){
            printf("%d ", num);

            if(i % 2 == 1){
                num += 1;
            }
            else if(i % 2 == 0){
                num += 2;
            }
        }
        if(i % 2 == 0){
            num -= 1;
        }
        else if(i % 2 == 1){
            num += 1;
        }
        printf("\n");
    }
    return 0;
}