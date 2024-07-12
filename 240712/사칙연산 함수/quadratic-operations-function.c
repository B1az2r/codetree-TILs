#include <stdio.h>
#include <stdbool.h>

bool Right(char o);
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(){
    
    int a, b;
    char o;
    
    scanf("%d %c %d", &a, &o, &b);

    if(Right(o)){
        int result;

        switch (o) {
            case '+':
                result = add(a, b);
                break;
            case '-':
                result = sub(a, b);
                break;
            case '*':
                result = mul(a, b);
                break;
            case '/':
                result = div(a, b);
                break;
        }
        printf("%d %c %d = %d", a, o, b, result);
    }
    else{
        printf("False\n");
    }



    return 0;
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

int div(int a, int b){
    return a/b;
}

bool Right(char o){
    return (o == '+' || o == '-' || o == '*' || o == '/');
}