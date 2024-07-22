#include <iostream>
#include <string>

using namespace std;

class Bomb {
    public:
    string code;
    char color;
    int second;

    Bomb() {}

    Bomb(string code, char color, int second){
        this->code = code;
        this->color = color;
        this->second = second;
    }
};



int main(){

    string code;
    char color;
    int second;

    cin >> code >> color >> second;

    Bomb bomb1 = Bomb(code, color, second);

    cout << "code : " << bomb1.code << endl;
    cout << "color : " << bomb1.color << endl;
    cout << "second : " << bomb1.second << endl;

    return 0;
}