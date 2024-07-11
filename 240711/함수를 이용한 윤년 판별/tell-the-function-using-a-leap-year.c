#include <stdio.h>
#include <stdbool.h>

bool Year(int n);


int main(){

    int n;
    scanf("%d", &n);
    
    bool result = Year(n);
    
    if(result == true){
        printf("true");
    }
    else{
        printf("false");
    }
    
    return 0;
}

bool Year(int n){
    if(n % 4 == 0){
        if(n % 100 == 0 && n % 400 != 0){
            return false;
        }
        return true;
    }
    return false;
}