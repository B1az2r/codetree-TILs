#include <stdio.h>

int Func(int n);
int main(){

    int n;
    scanf("%d", &n);

    printf("%d", Func(n));


    return 0;
}

int Func(int n){

    if(n < 10){
        return n * n;
    }

    int num = n % 10;


    return num * num + Func(n / 10);
}