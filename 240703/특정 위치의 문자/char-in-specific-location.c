#include <stdio.h>

int main(){

    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    int index = -1;
    char x;
    int i;

    scanf("%c", &x);

    for(i = 0; i < 6; i++){
        if(arr[i] == x){
            index = i;
        }
    }
    if(index == -1){
        printf("None");
    }
    else{
        printf("%d", index);
    }



    return 0;
}