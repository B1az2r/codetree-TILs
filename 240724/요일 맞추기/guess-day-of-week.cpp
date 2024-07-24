#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 각 달의 일수를 저장하는 배열
int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 요일 배열
string dayOfWeek[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

// 두 날짜 사이의 일 수를 계산하는 함수
int calculateDaysBetween(int m1, int d1, int m2, int d2) {
    int days = 0;
    
    // 같은 달인 경우
    if (m1 == m2) {
        days = d2 - d1;
    } else {
        // 첫 번째 달의 남은 일수
        days += daysInMonth[m1] - d1;
        
        // 중간의 모든 달
        for (int i = m1 + 1; i < m2; i++) {
            days += daysInMonth[i];
        }
        
        // 두 번째 달의 일수
        days += d2;
    }
    
    return days;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    // m1월 d1일이 월요일이면
    string startDay = "Mon";
    int startDayIndex = 1; // Mon corresponds to index 1

    // 두 날짜 사이의 일 수 계산
    int daysBetween = calculateDaysBetween(m1, d1, m2, d2);

    // 목표 날짜의 요일 계산
    int targetDayIndex = (startDayIndex + daysBetween) % 7;

    // 결과 출력
    cout << dayOfWeek[targetDayIndex] << endl;

    return 0;
}