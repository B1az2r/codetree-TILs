#include <stdio.h>

void Return(int n);

int main(){

    int n;
    scanf("%d", &n);

    Return(n);

    return 0;
}

void Return(int n){
    
    if(n == 0){
        return;
    }

    for(int i = 0; i < n; i++){
        printf("HelloWorld\n");
    }
}