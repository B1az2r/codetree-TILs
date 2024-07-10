#include <stdio.h>

void Five_stars();

int main(){
    for(int i = 0; i < 5; i++){
        Five_stars();
    }

    return 0;
}

void Five_stars(){
    printf("**********\n");
}