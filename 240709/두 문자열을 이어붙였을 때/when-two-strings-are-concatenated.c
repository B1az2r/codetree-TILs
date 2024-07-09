#include <stdio.h>
#include <string.h>

int main(){

    char arr[101];
    char brr[101];

    char sum1[202] = {0, };
    char sum2[202] = {0, };

    scanf("%s", arr);
    scanf("%s", brr);

    strcat(sum1, arr);
    strcat(sum1, brr);
    strcat(sum2, brr);
    strcat(sum2, arr);

    if(strcmp(sum1, sum2) == 0){
        printf("true\n");
    }
    else{
        printf("false\n");
    }

    return 0;
}