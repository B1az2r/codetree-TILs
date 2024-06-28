#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    for(int i = 0; i <= 2*n; i++){
        for(int j = 0; j <= 2*n; j++){
            if(i % 2 == 1 && j % 2 == 1){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}