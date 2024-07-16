#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool Modify(char *s);

int main(){

    char s[101];
    scanf("%s", &s);

    Modify(s);

    if(Modify(s)){
        printf("Yes");
    }
    else{
        printf("No");
    }



    return 0;
}

bool Modify(char *s){

    int len = strlen(s);

    for(int i = 0; i < len / 2; i++){
        if(s[i] != s[len-1-i]){
            return false;
        }
    }
    return true;
}