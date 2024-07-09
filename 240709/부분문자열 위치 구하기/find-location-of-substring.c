#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char arr[1001];
    char inp[1001];

    scanf("%s", arr);
    scanf("%s", inp);

    int len_arr = strlen(arr);
    int len_inp = strlen(inp);
    int cnt = -1;
    bool exist = false;

    for (int i = 0; i <= len_arr - len_inp; i++) {
        bool match = true;
        for (int j = 0; j < len_inp; j++) {
            if (arr[i + j] != inp[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            exist = true;
            cnt = i;
            break;
        }
    }

    if (!exist) {
        printf("-1\n");
    } else {
        printf("%d\n", cnt);
    }

    return 0;
}