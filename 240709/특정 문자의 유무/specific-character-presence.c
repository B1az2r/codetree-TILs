#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);

    char a[3] = "ee";
    char b[3] = "ab";
    int len_a = strlen(a);
    int len_b = strlen(b);

    bool aa = false;
    bool bb = false;

    for(int i = 0; i < len; i++){
        bool all_a = true;
        bool all_b = true;

        for(int j = 0; j < len_a; j++){
            if(arr[i+j] != a[j]){
                all_a = false;
            }
            if(arr[i+j] != b[j]){
                all_b = false;
            }
        }

        if(all_a == true){
            aa = true;
        }
        if(all_b == true){
            bb = true;
        } 
    }

    
    if(aa == true){
        if(bb == true){
            printf("Yes Yes");
        }
        else if(bb == false){
            printf("Yes No");
        }
    }
    else if(aa == false){
        if(bb == true){
            printf("No Yes");
        }
        else if(bb == false){
            printf("No No");
        }
    }


    return 0;
}