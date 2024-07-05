#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    int arr[100][100];
    int num = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = num;
            num += 1;
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}