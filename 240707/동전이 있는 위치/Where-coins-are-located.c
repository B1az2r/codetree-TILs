#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[82][82] = {0, };

    for(int i = 0; i < m; i++){
        int r, c;
        scanf("%d %d", &r, &c);
        arr[r][c] = 1;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}