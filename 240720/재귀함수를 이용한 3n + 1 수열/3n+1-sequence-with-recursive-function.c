#include <stdio.h>


int Calc(int n);
int cnt = 0;

int main(){
    
    int n;
    scanf("%d", &n);

    printf("%d", Calc(n));


    return 0;
}

int Calc(int n){
    if(n == 1){
        return cnt;
    }

    if(n % 2 == 0){
        cnt++;
        return Calc(n/2);
    }

    if(n % 2 == 1){
        cnt++;
        return Calc(3*n+1);
    }

}