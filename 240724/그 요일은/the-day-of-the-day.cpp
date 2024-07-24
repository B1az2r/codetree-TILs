#include <iostream>
#include <string>

using namespace std;

int NumOfDays(int m, int d) {
    // 계산 편의를 위해 월마다 몇 일이 있는지를 적어줍니다. 
    int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    
    // 1월부터 (m - 1)월 까지는 전부 꽉 채워져 있습니다.
    for(int i = 1; i < m; i++)
        total_days += days[i];
    
    // m월의 경우에는 정확히 d일만 있습니다.
    total_days += d;
    
    return total_days;
}

int main() {
    // 변수 선언 및 입력
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string A;
    cin >> A;

    // 첫 날짜와 두 번째 날짜 사이의 일 수를 계산
    int start_days = NumOfDays(m1, d1);
    int end_days = NumOfDays(m2, d2);
    int diff = end_days - start_days;

    // 입력된 요일을 요일 배열의 인덱스로 변환
    string day_of_week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int A_index = 0;
    for(int i = 0; i < 7; i++) {
        if(day_of_week[i] == A) {
            A_index = i;
            break;
        }
    }

    // 첫 번째 날짜의 요일 인덱스 (월요일은 0번째 인덱스)
    int start_day_index = 0;

    // 요일의 총 횟수 계산
    int total_count = 0;
    for(int i = 0; i <= diff; i++) {
        if((start_day_index + i) % 7 == A_index) {
            total_count++;
        }
    }

    // 결과 출력
    cout << total_count << endl;

    return 0;
}