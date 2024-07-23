#include <iostream>
#include <algorithm>

using namespace std;
#define max_n 1000

class Arr {
public:
    int value, index;

    Arr() {}
    Arr(int value, int index) {
        this->value = value;
        this->index = index;
    }
};

bool Cmp(const Arr &a, const Arr &b) {
    if (a.value == b.value) {
        return a.index < b.index;
    }
    return a.value < b.value;
}

int main() {
    int n;
    cin >> n;

    Arr arr[max_n];

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i] = Arr(x, i);
    }

    // 원본 배열 복사 (정렬되지 않은 상태)
    Arr original[max_n];
    for (int i = 0; i < n; i++) {
        original[i] = arr[i];
    }

    // 정렬
    sort(arr, arr + n, Cmp);

    // 위치 저장용 배열
    int position[max_n];
    for (int i = 0; i < n; i++) {
        position[arr[i].index] = i;
    }

    // 원본 배열을 순회하며 출력
    for (int i = 0; i < n; i++) {
        cout << position[i] + 1 << " ";
    }
    cout << endl;

    return 0;
}