#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countDifferentCharacters(char *arr);

int main(){

    char arr[100];
    scanf("%s", arr);

    int num = countDifferentCharacters(arr);
    
    if(num >= 2){
        printf("Yes");
    }
    else{
        printf("No");
    }

    


    return 0;
}

int countDifferentCharacters(char *arr) {
    int charCount[26] = {0};  // 알파벳 빈도수를 저장하는 배열
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        int index = arr[i] - 'a';  // 알파벳 'a'를 0으로 하는 인덱스 계산
        if (charCount[index] == 0) {
            charCount[index]++;
            count++;
        }
    }

    return count;
}