#include <stdio.h>

void First(int n);
void Second(int n);

int main(){

    int n;
    scanf("%d", &n);

    First(n);
    printf("\n");
    Second(n);

    return 0;
}

void First(int n){
    
    if(n == 0){
        return;
    }

    First(n-1);
    printf("%d ", n);
    
}

void Second(int n){
    if(n == 0){
        return;
    }

    printf("%d ", n);
    Second(n-1);
}