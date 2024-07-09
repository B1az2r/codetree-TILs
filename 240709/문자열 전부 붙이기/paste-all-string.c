#include <stdio.h>
#include <string.h>

int main(){
    
    int n;
    scanf("%d", &n);

    char arr[10][100];
    char sum[100];

    for(int i = 0; i < n; i++){
        scanf("%s", &arr[i]);
    }
    
    int index = 0;

    for(int i = 0; i < n; i++){
        int len = strlen(arr[i]);

        for(int j = 0; j < len; j++){
            sum[index++] = arr[i][j];
        }
    }
    sum[index] = '\0';

    printf("%s", sum);


    return 0;
}