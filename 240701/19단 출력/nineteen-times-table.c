#include <stdio.h>

int main(){

    for(int i = 1; i < 20; i++){
        for(int j = 1; j < 20; j++){
            if(j % 2 == 0){
                printf("%d * %d = %d\n", i, j, i*j);
            }
            else if(j == 19){
                printf("%d * %d = %d\n", i, j, i*j);
                }
            else{
                printf("%d * %d = %d / ", i, j, i*j);
            
            }
        }
    }


    return 0;
}