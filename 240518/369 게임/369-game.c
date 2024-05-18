#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    // 3, 6, 9의 배수 or 10으로 나눠서 일의자리 3, 6, 9 or 10으로 나눈 십의자리 3, 6, 9
    for(int i = 1; i <= n; i++){

        //3, 6, 9의 배수
        if(i % 3 == 0 || i % 6 == 0 || i % 9 == 0){
            printf("0 ");
        }
        //10으로 나눈 나머지인 일의자리 수 가 3, 6, 9
        else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9){
            printf("0 ");
        }
        else if(i / 10 == 3|| i / 10 == 6 || i / 10 == 9){
            printf("0 ");
        }
        else{
            printf("%d ", i);
        }
    }
    return 0;
}