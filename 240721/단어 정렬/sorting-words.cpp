#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string arr[100];
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }

    return 0;
}