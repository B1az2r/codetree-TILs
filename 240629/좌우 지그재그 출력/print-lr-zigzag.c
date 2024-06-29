#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int cnt1 = n*i+1;
        int cnt2 = n*i+n;
        
        for(int j = 0; j < n; j++){
            if(i % 2 == 0){
                printf("%d ", cnt1);
                cnt1++;
            }
            else if(i % 2 == 1){
                printf("%d ", cnt2);
                cnt2--;
            }
        }
        printf("\n");
    }
    return 0;
}