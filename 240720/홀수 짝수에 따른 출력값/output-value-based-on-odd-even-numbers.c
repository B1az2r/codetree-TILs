#include <stdio.h>

int Sum(int n);
int main(){

    int n;
    scanf("%d", &n);

    printf("%d", Sum(n));
    return 0;
}

int Sum(int n){
    
    if(n == 1){
        return 1;
    }

    if(n == 2){
        return 2;
    }

    if(n % 2 == 1){
        return Sum(n-2) + n;
    }

    if(n % 2 == 0){
        return Sum(n-2) + n;
    }
}