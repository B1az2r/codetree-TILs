#include <iostream>
#include <string>

using namespace std;

int main(){

    string binary;
    int n;

    cin >> binary;
    int num = 0;

    for(int i = 0; i < binary.size(); i++){
        if(binary[binary.size() - 1 - i] == '1'){
            num += (1 << i);
        }
    }

    cout << num << endl;

    return 0;
}