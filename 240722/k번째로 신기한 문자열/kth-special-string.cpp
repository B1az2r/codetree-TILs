#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    string T;
    
    // 첫 번째 줄에서 n, k, T를 입력 받음
    cin >> n >> k >> T;
    
    vector<string> words;
    
    // n개의 단어를 입력 받음
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        // T로 시작하는 단어를 필터링하여 words 벡터에 추가
        if (word.find(T) == 0) {
            words.push_back(word);
        }
    }
    
    // words 벡터를 사전순으로 정렬
    sort(words.begin(), words.end());
    
    // k번째 단어를 출력 (0-indexed 이므로 k-1)
    cout << words[k - 1] << endl;
    
    return 0;
}