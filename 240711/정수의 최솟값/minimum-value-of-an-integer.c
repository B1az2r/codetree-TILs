#include <stdio.h>

int Minimum(int a, int b, int c);

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", Minimum(a, b, c));

    return 0;
}

int Minimum(int a, int b, int c){

    if(a <= b && c <= b){
        if(a < c){
            return a;
        }
        else if(a >= c){
            return c;
        }
    }
    else if(b <= a && c <= a){
        if(b < c){
            return b;
        }
        else if(b >= c){
            return c;
        }
    }
    else if(a <= c && b <= c){
        if(a < b){
            return a;
        }
        else if(a >= b){
            return b;
        }
    }
}