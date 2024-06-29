#include <stdio.h>

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 1; i < 10; i++){
        for(int j = b; j > 0; j-=2){
            printf("%d * %d = %d ", j, i, i*j);
            if(j > a){
                printf("/ ");
            }
        }
        printf("\n");
    }

    return 0;
}