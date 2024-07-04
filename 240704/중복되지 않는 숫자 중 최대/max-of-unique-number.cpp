#include <iostream>
using namespace std;

#define MAX_VALUE 2147483647
#define MIN_VALUE -1//-2147483648

int QickFindMax(int* data, int start, int end);

int main() {
    int num;
    cin >> num;
    int* arr = new int[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    int value = QickFindMax(arr, 0, num - 1);
    cout << value;
    delete(arr);
}

int QickFindMax(int* data, int start, int end) {
    //기준값(시작값)
    int pivot = data[start];

    //최댓값 결정
    if (start == end) return pivot;
    //틀린 값
    else if (start > end) return MIN_VALUE;
    int f_cursor = start + 1;
    int b_cursor = end;
    int i = start, j = end;
    int cnt = 0;

    //엇갈릴 때까지 반복
    for (; f_cursor <= b_cursor;) {
        while (pivot <= data[f_cursor] && f_cursor <= j) {
            if (pivot == data[f_cursor]) {
                cnt++;
                f_cursor++;
                continue;
            }
            else data[i++] = data[f_cursor++];
        }
        while (pivot >= data[b_cursor] && f_cursor <= b_cursor) {
            if (pivot == data[b_cursor]) {
                cnt++;
                b_cursor--;
            }
            else data[j--] = data[b_cursor--];
        }
        if (f_cursor < b_cursor) {
            //서로 엇갈려서 넣는다.
            data[i++] = data[b_cursor--];
            data[j--] = data[f_cursor++];
        }
    }
    int value;
    //pivot이 배열내에서 가장 큰 경우 / max값인 경우
    if (i == start && cnt == 0)return pivot;
    //pivot 보다 큰것에서 max 값 찾기
    value = QickFindMax(data, start, i - 1);
    //큰것에서 찾는 것을 성공한 경우
    if (value > MIN_VALUE) {
        return value;
    }
    //pivot이 max값인 경우
    if (cnt == 0) return pivot;
    //pivot보다 작은 것에서 max값 찾기
    value = QickFindMax(data, j+1, end);
    //작은것에서 찾는 것을 성공한 경우
    if (value > MIN_VALUE) {
        return value;
    }
    //찾는 것 실패
    return MIN_VALUE;
}