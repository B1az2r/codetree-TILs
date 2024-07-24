#include <iostream>
using namespace std;

int main(){
    
    int a, b, c;
    cin >> a >> b >> c;

    int now_day = 11;
    int now_hour = 11;
    int now_min = 11;

    if(a < now_day || (a == now_day && b < now_hour) || (a == now_day && b == now_hour && c < now_min)){
        cout << "-1" << endl;
        return 0;
    }

    int min = 0;

    while(true){
        
        if(now_day == a && now_hour == b  && now_min == c){
            break;
        }

        min++;
        now_min++;

        if(now_min == 60){
            now_hour++;
            now_min = 0;
        }

        if(now_hour >= 24){
            now_day++;
            now_hour = 0;
        }
    }
    cout << min;

    return 0;
}