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
        return 2;
    }

    if(n == 2){
        return 4;
    }

    return (Num(n-1) * Num(n-2)) % 100;

}