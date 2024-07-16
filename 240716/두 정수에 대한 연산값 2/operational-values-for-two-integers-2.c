#include <stdio.h>

void Compare(int *a, int *b);

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    Compare(&a, &b);
    
    printf("%d %d", a, b);



    return 0;
}

void Compare(int *a, int *b){
    int temp_a = *a;
    int temp_b = *b;

    if(temp_a > temp_b){
        *a = temp_a * 2;
        *b = temp_b + 10;
    }
    else{
        *b = temp_b * 2;
        *a = temp_a + 10;
    }
}