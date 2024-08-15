#include <iostream>
#include <string>
using namespace std;

const int OFFSET = 1000; // 배열 인덱스를 0 이상으로 만들기 위한 오프셋
const int MAX_POS = 2000; // 최대 이동 가능 범위

int visited[MAX_POS] = {0};

int main() {
    int n;
    cin >> n;

    int position = OFFSET;

    for (int i = 0; i < n; i++) {
        int x;
        char direction;
        cin >> x >> direction;

        if (direction == 'L') {
            for (int j = 0; j < x; j++) {
                visited[--position]++;
            }
        } else if (direction == 'R') {
            for (int j = 0; j < x; j++) {
                visited[position++]++;
            }
        }
    }

    int overlap_area = 0;
    for (int i = 0; i < MAX_POS; i++) {
        if (visited[i] >= 2) {
            overlap_area++;
        }
    }

    cout << overlap_area << endl;

    return 0;
}