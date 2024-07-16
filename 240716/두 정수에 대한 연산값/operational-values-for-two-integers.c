#include <stdio.h>

void Calc(int *a, int *b);

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    Calc(&a, &b);


    return 0;
}

void Calc(int *a, int *b){
    int temp_a = *a;
    int temp_b = *b;

    if(temp_a > temp_b){
        *a = temp_a + 25;
        *b = temp_b * 2;
        printf("%d %d", *a, *b);
    }    

    else{
        *a = temp_b + 25;
        *b = temp_a * 2;
        printf("%d %d", *b, *a);
    }



}