#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    char num = 'A';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            printf("  ");
        }
        for(int j = 0; j < n-i; j++){
            printf("%c ", num);
            num++;
            if(num > 'Z'){
                num = 'A';
            }
        }
        printf("\n");
    }

    return 0;
}