#include <stdio.h>


void Print(int n);

int main(){

    int n;
    scanf("%d", &n);

    Print(n);

    return 0;
}


void Print(int n){
    
    if(n == 0){
        return;
    }

    for(int i = 1; i <= n; i++){
        printf("* ");
    }
    printf("\n");
    
    Print(n-1);
    
    for(int i = 1; i <= n; i++){
        printf("* ");
    }
    printf("\n");
}