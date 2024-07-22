#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


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
};

Data ans = Data("9999-99-99", "", "");

int main(){

    int n;
    cin >> n;

    Data datas[n];

    for(int i = 0; i < n; i++){
        string date, day, weather;
        cin >> date >> day >> weather;
        datas[i] = Data(date, day, weather);
    }


    for(int i = 0; i < n; i++){
        if(datas[i].weather == "Rain"){
            if(ans.date >= datas[i].date){
                ans = datas[i];
            }
        }
    }

    cout << ans.date << " " << ans.day << " " << ans.weather;

    return 0;
}