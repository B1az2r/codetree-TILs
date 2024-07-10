#include <stdio.h>

void Gcd(int n, int m);

int main(){

    int n, m;
    scanf("%d %d", &n, &m);

    Gcd(n, m);


    return 0;
}

void Gcd(int n, int m){
    int gcd = 1;

    for(int i = 1; i < (n < m ? n : m); i++){
        if(n % i == 0 && m % i == 0){
            gcd = i;
        }
    }
    
    int lcm = (n*m) / gcd;

    printf("%d", lcm);
}