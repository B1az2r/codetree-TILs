#include <stdio.h>

void Nice_fun(int n);

int main(){

    int x;
    scanf("%d", &x);

    Nice_fun(x);

    return 0;
}

void Nice_fun(int n){
    for(int i = 0; i < n; i++){
        printf("12345^&*()_\n");
    }
}