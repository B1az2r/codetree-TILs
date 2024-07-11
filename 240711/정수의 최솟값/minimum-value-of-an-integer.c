#include <stdio.h>

int Minimum(int a, int b, int c);

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", Minimum(a, b, c));

    return 0;
}

int Minimum(int a, int b, int c){
    int min = a;
    
    if(min > b){
        min = b;
    }
    if(min > c){
        min = c;
    }

    return min;

}