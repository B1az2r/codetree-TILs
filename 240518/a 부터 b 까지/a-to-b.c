#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b;){
        if(i % 2 == 1){
            printf("%d ", i);
            i *= 2;
        }
        else if(i % 2 == 0){
            printf("%d ", i);
            i += 3;
        }
    }

    return 0;
}