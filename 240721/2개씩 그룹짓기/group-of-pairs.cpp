#include <iostream>
#include <algorithm>

using namespace std;
int result;

int main(){

    int n;
    int arr[1001];

    cin.tie(0) -> sync_with_stdio(0);

    cin >> n;

    for(int i = 0; i < 2*n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + 2*n);

    for(int i = 0; i < n; i++){
        result = max(result, arr[i] + arr[2*n-1-i]);
    }

    cout << result;
    

    return 0;
}