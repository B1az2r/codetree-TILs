#include <stdio.h>
#include <stdbool.h>

bool isSubsequence(int A[], int n1, int B[], int n2) {
    for (int i = 0; i <= n1 - n2; i++) {
        bool match = true;
        for (int j = 0; j < n2; j++) {
            if (A[i + j] != B[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }
    return false;
}


int main(){


    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int arr1[100];
    int arr2[100];

    for(int i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);
    }

    if(isSubsequence(arr1, n1, arr2, n2)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    







    return 0;
}