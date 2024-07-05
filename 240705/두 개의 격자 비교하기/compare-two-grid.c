#include <stdio.h>

int main(){

    int n, m;
    int arr1[10][10];
    int arr2[10][10];
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr1[i][j] != arr2[i][j]){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}