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

    return Sum(n-1) + n;
}