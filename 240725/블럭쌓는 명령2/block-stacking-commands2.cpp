#include <iostream>
using namespace std;

int first[101] = {0, };
int second[101] = {0, };
int num[101] = {0, };

int main(){
    
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        cin >> first[i] >> second[i];
    }

    for(int i = 0; i < k; i++){
        for(int j = first[i]; j <= second[i]; j++){
            num[j]++;
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(num[i] > cnt){
            cnt = num[i]; 
        }
    }
    cout << cnt;
    
    return 0;
}