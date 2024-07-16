#include <stdio.h>


void Swap(int *a, int *b);

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    Swap(&n, &m);


    return 0;
}

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("%d %d", *a, *b);
}