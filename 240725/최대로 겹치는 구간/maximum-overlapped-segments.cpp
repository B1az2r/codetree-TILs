#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, char>> events; // pair(좌표, 's' or 'e')
    
    for (int i = 0; i < n; ++i) {
        int x1, x2;
        cin >> x1 >> x2;
        events.push_back({x1, 's'}); // 시작점
        events.push_back({x2, 'e'}); // 끝점
    }
    
    // 이벤트 정렬
    sort(events.begin(), events.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
        if (a.first == b.first) {
            return a.second < b.second; // 같은 위치에 있을 경우 끝점을 먼저 처리
        }
        return a.first < b.first;
    });

    int current_overlap = 0;
    int max_overlap = 0;

    for (const auto& event : events) {
        if (event.second == 's') {
            ++current_overlap;
            max_overlap = max(max_overlap, current_overlap);
        } else {
            --current_overlap;
        }
    }

    cout << max_overlap << endl;
    return 0;
}