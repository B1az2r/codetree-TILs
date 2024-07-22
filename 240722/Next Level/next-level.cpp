#include <iostream>
#include <string>

using namespace std;

class Information {
    public:
    string id;
    int level;

    Information(string id = "codetree", int level = 10){
        this->id = id;
        this->level = level;
    }
};


int main(){

    string id;
    int level;


    cin >> id >> level;
    Information user1 = Information();
    Information user2 = Information(id, level);

    cout << "user " << user1.id << " lv " << user1.level << endl; 
    cout << "user " << user2.id << " lv " << user2.level << endl; 


    return 0;
}