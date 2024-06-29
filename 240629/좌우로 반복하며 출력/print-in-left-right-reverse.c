#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int cnt1 = 1;
    int cnt2 = n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i % 2 == 0){
                printf("%d", cnt1);
                cnt1++;
                if(cnt1 > n){
                    cnt1 = 1;
                }
            }
            else if(i % 2 == 1){
                printf("%d", cnt2);
                cnt2--;
                if(cnt2 == 0){
                    cnt2 = n;
                }
            }
        }
        printf("\n");
    }

    return 0;
}