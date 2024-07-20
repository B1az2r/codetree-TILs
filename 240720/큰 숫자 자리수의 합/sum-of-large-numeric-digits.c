#include <stdio.h>

int Num(int a);
int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result = a * b * c;

    printf("%d", Num(result));


    return 0;
}

int Num(int a){
    
    if(a == 0){
        return 0;
    }

    return Num(a / 10) + (a % 10);
}