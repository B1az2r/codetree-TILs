#include <stdio.h>
#include <string.h>

int main(){

    int n;
    scanf("%d", &n);

    char arr[10][100] = {0, };
    char sum[1000] = {0, };

    for(int i = 0; i < n; i++){
        scanf("%s", arr[i]);
        strcat(sum, arr[i]);
    }

    int len = strlen(sum);

    for(int i = 0; i < len; i++){
        printf("%c", sum[i]);

        if((i+1) % 5 == 0){
            printf("\n");
        }
    }


    

    return 0;
}