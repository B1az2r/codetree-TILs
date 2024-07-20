#include <stdio.h>


int Func(int n);
int main(){

    int n;
    scanf("%d", &n);

    printf("%d", Func(n));


    return 0;
}

int Func(int n){
    if(n == 1){
        return 1;
    }

    if(n == 2){
        return 1;
    }

    return Func(n-1) + Func(n-2);
}