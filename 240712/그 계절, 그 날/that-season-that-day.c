#include <stdio.h>
#include <stdbool.h>

bool Year(int y);
int Date(int y, int m);
int Exist(int y, int m, int d);

int main(){

    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);
    int result = Exist(y, m, d);

    if(result == -1){
        printf("%d", result);
    }
    else if(result == 1){
        printf("Spring");
    }
    else if(result == 2){
        printf("Summer");
    }
    else if(result == 3){
        printf("Fall");
    }
    else if(result == 4){
        printf("Winter");
    }

    return 0;
}

// 윤년 찾는 함수
bool Year(int y){
    if(y % 4 == 0){
        if(y % 100 == 0 && y % 400 != 0){
            return false;
        }
        return true;
    }
    return false;
}

// 말일 설정. 윤년이면 2월은 29일까지. 1 3 5 6 8 10 12 => 31일 // 4 6 9 11 => 30일
int Date(int y, int m){
    int max;
    if(m == 2){
        if(Year(y)){
            max = 29;
        }
        else{
            max = 28;
        }
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        max = 30;
    }
    else{
        max = 31;
    }
    return max;
}

// 날짜 존재 여부 함수
int Exist(int y, int m, int d){
    if(m < 1 || m > 12){
        return -1;
    }

    if(d < 1 || d > Date(y, m)){
        return -1;
    }

    if(Date(y, m)){
        if(3 <= m && m <= 5){
            return 1;
        }
        else if(6 <= m && m <= 8){
            return 2;
        }
        else if(9 <= m && m <= 11){
            return 3;
        }
        else if(m == 1 || m == 2 || m == 12){
            return 4;
        }
    }
}