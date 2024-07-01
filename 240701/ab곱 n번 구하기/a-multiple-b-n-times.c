#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int val = 1;

    for(int i = 1; i <= n; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        for(int j = a; j <= b; j++){
            val *= j;
        }
        printf("%d\n", val);
        val = 1;
    }

    return 0;
}