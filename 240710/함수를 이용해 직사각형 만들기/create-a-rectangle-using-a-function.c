#include <stdio.h>

void Square(int n, int m);

int main(){
    
    int x, y;
    scanf("%d %d", &x, &y);

    Square(x, y);


    return 0;
}

void Square(int n, int m){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("1");
        }
        printf("\n");
    }
}