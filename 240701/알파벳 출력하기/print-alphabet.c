#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    char num = 'A';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            if(num > 'Z'){
                num = 'A';
            }
            printf("%c", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}