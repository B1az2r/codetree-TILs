#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class People {
    public:
    string name;
    string address;
    string region;
    
    People () {}

    People(string name, string address, string region){
        this->name = name;
        this->address = address;
        this->region = region;
    }
};

bool Compare(const People &a, People &b){
    return a.name > b.name;
}

int main(){

    int n;
    cin >> n;

    string name, address, region;

    People person[n];

    for(int i = 0; i < n; i++){
        cin >> name >> address >> region;
        person[i] = People(name, address, region);
    }

    sort(person, person + n, Compare);

    cout << "name " << person[0].name << endl;
    cout << "addr " << person[0].address << endl;
    cout << "city " << person[0].region << endl;

    return 0;
}