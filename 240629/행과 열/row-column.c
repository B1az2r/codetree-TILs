#include <stdio.h>

int main(){

    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", (i+1)*(j+1));
        }
        printf("\n");
    }

    return 0;
}