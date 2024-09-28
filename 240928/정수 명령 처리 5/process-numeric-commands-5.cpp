#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v;
    string input;
    int num, index;

    for(int i = 0; i < n; i++){
        cin >> input;

        if(input == "push_back"){
            cin >> num;
            v.push_back(num);
        }
        else if(input == "get"){
            cin >> index;
            if(index >= 1 && index <= v.size()){
                cout << v[index - 1] << endl;
            }
        }
        else if(input == "size"){
            cout << v.size() << endl;
        }
        else if(input == "pop_back"){
            if(!v.empty()){
                v.pop_back();
            }
        }
    }
    return 0;
}