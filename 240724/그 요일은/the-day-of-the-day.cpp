#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// 각 달의 일수를 저장하는 배열 (윤년)
int daysInMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// 요일 배열
string dayOfWeek[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

// 두 날짜 사이의 일 수를 계산하는 함수
int calculateDaysBetween(int m1, int d1, int m2, int d2) {
    int days = 0;
    
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

// 주어진 요일의 인덱스를 찾는 함수
int findDayIndex(string day) {
    for (int i = 0; i < 7; i++) {
        if (dayOfWeek[i] == day) {
            return i;
        }
    }
    return -1; // Should not happen if input is always valid
}

int main() {
    int m1, d1, m2, d2;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // 2024년 m1월 d1일이 월요일이면
    string startDay = "Mon";
    int startDayIndex = 0; // Mon corresponds to index 0

    // 두 날짜 사이의 일 수 계산
    int daysBetween = calculateDaysBetween(m1, d1, m2, d2);

    // 주어진 요일의 인덱스
    int targetDayIndex = findDayIndex(A);

    // 첫 번째 날짜의 요일 계산
    int firstDayIndex = (startDayIndex + ((d1 - 1) % 7)) % 7;

    // 두 번째 날짜의 요일 계산
    int totalOccurrences = 0;
    for (int i = 0; i <= daysBetween; i++) {
        int currentDayIndex = (firstDayIndex + i) % 7;
        if (currentDayIndex == targetDayIndex) {
            totalOccurrences++;
        }
    }

    // 결과 출력
    cout << totalOccurrences << endl;

    return 0;
}