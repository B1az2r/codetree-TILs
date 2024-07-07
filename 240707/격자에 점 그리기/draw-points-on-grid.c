#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10][10] = {0, };
    int cnt = 1;


    for(int i = 0; i < m; i++){
        int r, c;
        scanf("%d %d", &r, &c);
        arr[r][c] = cnt;
        cnt++;
        
    }

    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i][j] != 0){
                printf("%d ", arr[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}