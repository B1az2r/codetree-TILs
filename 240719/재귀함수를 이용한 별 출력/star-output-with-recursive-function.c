#include <stdio.h>

void Star(int n);

int main(){

    int n;
    scanf("%d", &n);

    Star(n);

    return 0;
}

void Star(int n){
    if(n == 0){
        return;
    }

    Star(n-1);
    for(int i = 0; i < n; i++){
        printf("*");
    }
    printf("\n");
}