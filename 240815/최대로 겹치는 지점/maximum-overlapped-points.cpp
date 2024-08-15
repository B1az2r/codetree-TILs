#include <iostream>
using namespace std;

#define max_n 101

int start[101];
int ending[101];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x1, x2;
        cin >> x1 >> x2;
        start[x1]++;
        ending[x2]++;
    }

    int max = 0;
    int current = 0;

    for(int i = 1; i <= 100; i++){
        current += start[i];

        if(current > max){
            max = current;
        }

        current -= ending[i];
    }

    cout << max;

    return 0;
}