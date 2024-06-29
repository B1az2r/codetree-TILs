#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int count = 1;
    int dev = count % 10;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(count < 10){
                printf("%d", count);
                count++;
            }
            if(count == 10){
                count = 1;
            }
        }
        printf("\n");
    }

    return 0;
}