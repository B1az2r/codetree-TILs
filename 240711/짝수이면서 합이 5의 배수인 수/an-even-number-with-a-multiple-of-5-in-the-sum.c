#include <stdio.h>
#include <stdbool.h>

bool Even_5(int n);

int main(){

    int n;
    scanf("%d", &n);

    Even_5(n);

    return 0;
}

bool Even_5(int n){
    
    bool num = false;
    int calc = ((n/10) + (n%10)) % 5;

    if((n % 2 == 0) && ((calc == 0)||(calc == 5))){
        num = true;
    }

    if(num == true){
        printf("Yes");
    }
    else{
        printf("No");
    }
}