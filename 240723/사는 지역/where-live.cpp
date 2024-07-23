#include <iostream>
#include <algorithm>
#include <string>

#define Max_n 10
using namespace std;

class People {
    public:
    string name, address, region;

    People () {}
    People(string name, string address, string region){
        this->name = name;
        this->address = address;
        this->region = region;
    }
};

bool Cmp(const People &a, const People &b){
    return a.name > b.name;
}

int main(){
    int n;
    cin >> n;

    People person[Max_n];

    for(int i = 0; i < n; i++){
        string name, address, region;
        cin >> name >> address >> region;
        person[i] = People(name, address, region);
    }

    sort(person, person + n, Cmp);


    cout << "name " << person[0].name << "\n";
    cout << "addr " << person[0].address << "\n";
    cout << "city " << person[0].region << "\n";

    return 0;
}