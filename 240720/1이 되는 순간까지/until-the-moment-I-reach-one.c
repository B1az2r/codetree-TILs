#include <stdio.h>

int Func(int n);
int cnt = 0;
int main(){

    int n;
    scanf("%d", &n);

    printf("%d", Func(n));


    return 0;
}

int Func(int n){

    if(n == 1){
        return cnt;
    }

    if(n % 2 == 0){
        cnt++;
        return Func(n/=2);
    }
    else if(n % 2 == 1){
        cnt++;
        return Func(n/=3);
    }

}