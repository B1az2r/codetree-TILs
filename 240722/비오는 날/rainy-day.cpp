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


class Data {
    public:
    string date;
    string day;
    string weather;

    Data(string date, string day, string weather){
        this->date = date;
        this->day = day;
        this->weather = weather;
    }
    Data () {}

    bool operator<(const Data &other) const{
        return date < other.date;
    }
};

int main(){

    int n;
    cin >> n;

    Data datas[n];

    for(int i = 0; i < n; i++){
        string date, day, weather;
        cin >> date >> day >> weather;
        datas[i] = Data(date, day, weather);
    }

    sort(datas, datas + n);

    for(int i = 0; i < n; i++){
        if(datas[i].weather == "Rain"){
            cout << datas[i].date << " " << datas[i].day << " " << datas[i].weather << endl;
            break;
        }
    }


    return 0;
}