#include <stdio.h>
#include <limits.h>
#include <string.h>

int main(){

    char arr1[21];
    char arr2[21];
    char arr3[21];

    scanf("%s", arr1);
    scanf("%s", arr2);
    scanf("%s", arr3);

    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int len3 = strlen(arr3);

    int arr_len[3] = {len1, len2, len3};

    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i < 3; i++){
        if(arr_len[i] > max){
            max = arr_len[i];
        }
        if(arr_len[i] < min){
            min = arr_len[i];
        }
    }
    printf("%d", max - min);
    
    return 0;
}