#include <iostream>
#include <string>


using namespace std;



class Meeting {
    public:

    string code;
    char place;
    int time;

    Meeting(string code, char place, int time){
        this->code = code;
        this->place = place;
        this->time = time;
    }
};

int main(){

    Meeting meet1 = Meeting("codetree", 'L', 13);
    cout << "secret code : " << meet1.code << endl;  
    cout << "meeting point : " << meet1.place << endl;
    cout << "time : " << meet1.time << endl;
    return 0;
}