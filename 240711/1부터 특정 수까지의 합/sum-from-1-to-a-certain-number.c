#include <stdio.h>

int sum(int n);

int main(){

    int n;
    scanf("%d", &n);

    printf("%d", sum(n));


    return 0;
}

int sum(int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    int result = total / 10;
    return result;
}