#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// 최대 힙을 위한 비교 함수
class CompareMax {
public:
    bool operator()(int a, int b) {
        return a < b;
    }
};

// 최소 힙을 위한 비교 함수
class CompareMin {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    priority_queue<int, vector<int>, CompareMax> maxHeap; // 최대 힙
    priority_queue<int, vector<int>, CompareMin> minHeap; // 최소 힙

    for (int i = 0; i < n; ++i) {
        if (maxHeap.empty() || numbers[i] <= maxHeap.top()) {
            maxHeap.push(numbers[i]);
        } else {
            minHeap.push(numbers[i]);
        }

        // 균형 유지
        if (maxHeap.size() > minHeap.size() + 1) {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        } else if (minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }

        // 홀수 번째 원소일 때 중앙값 출력
        if (i % 2 == 0) {
            cout << maxHeap.top() << " ";
        }
    }

    return 0;
}