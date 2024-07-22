#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string word1, word2;
    cin >> word1 >> word2;

    // 두 단어의 길이가 다르면 바로 "No" 출력
    if (word1.length() != word2.length()) {
        cout << "No" << endl;
        return 0;
    }

    // 두 단어를 정렬
    sort(word1.begin(), word1.end());
    sort(word2.begin(), word2.end());

    // 정렬된 두 단어를 비교
    if (word1 == word2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}