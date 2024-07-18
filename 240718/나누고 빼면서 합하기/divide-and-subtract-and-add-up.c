#include <stdio.h>

int arr[101];
int cnt;

int return_value();

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

    for(int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }

    cnt = m;

    printf("%d", return_value());


    return 0;
}

int return_value(){
    int value = 0;

    while(cnt){
        value += arr[cnt];

        if(cnt % 2 == 0){
            cnt /= 2;
        }
        else{
            cnt--;
        }
    }
    return value;
}