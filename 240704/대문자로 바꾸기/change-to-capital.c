#include <stdio.h>

int main(){

    char x;
    int dif = 'A' - 'a';

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            scanf(" %c", &x);
            printf("%c ", (x + dif));
        }
        printf("\n");
    }

    return 0;
}