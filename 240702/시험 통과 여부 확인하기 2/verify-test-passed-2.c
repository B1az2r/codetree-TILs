#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[4];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        int avg = sum / 4;

        if(avg >= 60){
            printf("pass\n");
            cnt++;
        }
        else{
            printf("fail\n");
        }
        
    }
    printf("%d\n", cnt);

    return 0;
}