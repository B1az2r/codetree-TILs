#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n;
    int b;

    cin >> n >> b;
    int num = 0;

    int arr[32];
    
    while(n > 0){
        arr[num++] = n % b;
        n /= b;
    }

    for(int i = num - 1; i >= 0; i--){
        cout << arr[i];
    }

    return 0;
}