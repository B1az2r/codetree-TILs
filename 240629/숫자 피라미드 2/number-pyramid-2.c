#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int num = 1;
    
    for(int i = 1; i <= n; i++){

        for(int j = 0; j < i; j++){
            printf("%d ", num);
            num += 1;
        }
        printf("\n");
    }
    return 0;
}