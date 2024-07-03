#include <stdio.h>

int main(){
    
    char arr[3];
    int num[3];
    int cnt[4] = { 0, };

    for(int i = 0; i < 3; i++){
        scanf(" %c %d", &arr[i], &num[i]);

        if(arr[i] == 'Y' && num[i] >= 37){
            cnt[0]++;
        }
        else if(arr[i] == 'N' && num[i] >= 37){
            cnt[1]++;
        }
        else if(arr[i] == 'Y' && num[i] < 37){
            cnt[2]++;
        }
        else if(arr[i] == 'N' && num[i] < 37){
            cnt[3]++;
        }
    }
    
    for(int i = 0; i < 4; i++){
        printf("%d ", cnt[i]);
    }
    if(cnt[0] >= 2){
        printf("E\n");
    }

    return 0;
}