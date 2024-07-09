#include <stdio.h>
#include <string.h>

int main(){

    char arr[101];
    int q;
    scanf("%s %d", arr, &q);
    int len = strlen(arr);

    for(int i = 0; i < q; i++){
        int n;
        char a1, b1;
        scanf("%d %c %c", &n, &a1, &b1);

        if(n == 1){
            int index_a = a1 - '1';
            int index_b = b1 - '1';

            if(index_a >= 0 && index_a < len && index_b < len && index_b >= 0){
                char temp = arr[index_a];
                arr[index_a] = arr[index_b];
                arr[index_b] = temp;
            }
        }
        else if(n == 2){
            for(int j = 0; j < len; j++){
                if(arr[j] == a1){
                    arr[j] = b1;
                }
            }
        }
        printf("%s\n", arr);
        
    }



    return 0;
}