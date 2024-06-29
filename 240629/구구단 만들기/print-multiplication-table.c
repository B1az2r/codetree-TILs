#include <stdio.h>

int main(){
    
    int a, b;
    scanf("%d %d", &a, &b);

    if(a != b){
        for(int i = 1; i < 10; i++){
            for(int j = b; j > 0; j-=2){
                printf("%d * %d = %d ", j, i, i*j);
                if(j > a){
                    printf("/ ");
                }
            }
            printf("\n");
        }
    }
    else if(a == b){
        for(int i = 1; i < 10; i++){
            printf("%d * %d = %d\n", a, i, a*i);
        }
    }
    

    return 0;
}