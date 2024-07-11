#include <stdio.h>
#include <stdbool.h>

bool Prime(int num);
int Prime_sum(int a, int b);

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", Prime_sum(a, b));
    

    return 0;
}

bool Prime(int num){
    if(num <= 1){
        return false;
    }
    if(num == 2){
        return true;
    }
    if(num % 2 == 0){
        return false;
    }
    for(int i = 3; i*i <= num; i+=2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int Prime_sum(int a, int b){
    int sum = 0;
    for(int i = a; i <= b; i++){
        if(Prime(i)){
            sum += i;
        }
    }
    return sum;
}