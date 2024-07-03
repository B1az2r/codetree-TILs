#include <stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    int arr[10] = {0, };
    int cnt = 0;

    while(a > 1){
        arr[a%b]++;
        a/=b;
    }

    for(int i = 0; i < b; i++){
        cnt += arr[i] * arr[i];
    }

    printf("%d", cnt);


    return 0;
}