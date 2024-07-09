#include <stdio.h>
#include <string.h>

int main(){

    char arr[20];
    scanf("%s", arr);
    int len = strlen(arr);

    char a[3] = "ee";
    char b[3] = "eb";

    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i < len-1; i++){

        if(arr[i] == 'e' && arr[i+1] == 'e'){
            cnt1++;
        }
        if(arr[i] == 'e' && arr[i+1] == 'b'){
            cnt2++;
        }
    }
    printf("%d %d", cnt1, cnt2);



    return 0;
}