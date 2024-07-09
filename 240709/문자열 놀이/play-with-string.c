#include <stdio.h>
#include <string.h>

int main(){

    char arr[101];
    int q;
    scanf("%s %d", arr, &q);
    int len = strlen(arr);

    for(int i = 0; i < q; i++){

        int n;
        scanf("%d", &n);

        if(n == 1){
            int a, b;
            scanf("%d %d", &a, &b);

            char temp = arr[b-1];
            arr[b-1] = arr[a-1];
            arr[a-1] = temp;

            printf("%s\n", arr);
            }

        
        else if(n == 2){

            char a, b;
            scanf(" %c %c", &a, &b);
            
            for(int j = 0; arr[j] != '\0'; j++){
                if(arr[j] == a){
                    arr[j] = b;
                }
            }
            printf("%s\n", arr);
        }
    }

    return 0;
}