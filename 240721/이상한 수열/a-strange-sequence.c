#include <stdio.h>

int Num(int n);
int main(){

    int n;
    scanf("%d", &n);

    printf("%d", Num(n));
    return 0;
}

int Num(int n){
    if(n == 1){
        return 1;
    }

    if(n == 2){
        return 2;
    }

    return Num(n/3) + Num(n-1);
}