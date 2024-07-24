#include <iostream>
#include <string>

using namespace std;

int main(){

    string n;
    cin >> n;

    int num = 0;

    for(int i = 0; i < n.size(); i++){
        num = num * 2 + (n[i] - '0');
    }

    int decimal = num * 17;
    int arr[32] = {};
    int index = 0;

    while(decimal > 0){
        if(decimal < 2){
            arr[index++] = decimal;
            break;
        }

        arr[index++] = decimal % 2;
        decimal /= 2;
    }

    for(int i = index - 1; i >= 0; i--){
        cout << arr[i];
    }
    
    return 0;
}