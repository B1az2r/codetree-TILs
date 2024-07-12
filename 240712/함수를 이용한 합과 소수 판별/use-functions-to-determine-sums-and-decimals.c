#include <stdio.h>
#include <stdbool.h>


bool Prime(int a);
bool Even(int a);
int Count(int a, int b);

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", Count(a, b));
    
    return 0;
}

bool Prime(int a){
    if(a == 1){
        return false;
    }
    if(a == 2){
        return true;
    }
    if(a % 2 == 0){
        return false;
    }

    for(int i = 3; i * i <= a; i+=2){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}

bool Even(int a){
    int sum = 0;
    while(a > 0){
        sum += a % 10;
        a /= 10;
    }
    return sum % 2 == 0;
}

int Count(int a, int b){
    int cnt = 0;
    for(int i = a; i <= b; i++){
        if(Prime(i) && Even(i)){
            cnt++;
        }
    }
    return cnt;
}