#include <iostream>

using namespace std;


int main(){

    int a, c; // 시간
    int b, d; // 분

    int min = 0;

    cin >> a >> b >> c >> d;

    while(true){
        
        if(a == c && b == d){
            break;
        }

        min++;
        b++;
        
        if(b == 60){
            a++;
            b = 0;
        }
    }

    cout << min;

    return 0;
}