#include <stdio.h>

int Fact(int n);
int main(){

    int n;
    scanf("%d", &n);

    printf("%d", Fact(n));

    return 0;
}

int Fact(int n){
    if(n <= 1){
        return 1;
    }

    return Fact(n-1) * n;
}