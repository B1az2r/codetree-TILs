#include <stdio.h>
#include <stdbool.h>

int Max_date(int m);
bool Date(int m, int d);

int main(){

    int m, d;
    scanf("%d %d", &m, &d);

    if(Date(m, d)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}

int Max_date(int m){
    int max;
    if(m == 2){
        max = 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        max = 30;
    }
    else{
        max = 31;
    }

    return max;
}

bool Date(int m, int d){
    if(m < 1 || m > 12){
        return false;
    }

    if((d < 1) || d > Max_date(m)){
        return false;
    }
    return true;
}