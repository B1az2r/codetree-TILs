#include <stdio.h>

void Square(int n);

int main(){

    int n;
    scanf("%d", &n);

    Square(n);


    return 0;
}

void Square(int n){
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", num);
            num++;
            if(num == 10){
                num = 1;
            }
        }
        printf("\n");
    }
}