#include <stdio.h>

int mul(int a, int b);

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", mul(a, b));


    return 0;
}

int mul(int a, int b){
    int result = 1;
    for(int i = 0; i < b; i++){
        result *= a;
    }
    return result;
}