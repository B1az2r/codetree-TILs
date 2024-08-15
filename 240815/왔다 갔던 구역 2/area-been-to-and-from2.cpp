#include <iostream>
#include <string>
using namespace std;

#define offset 1000
#define range 2000

int visitied[range] = {0, };

int main(){

    int n;
    cin >> n;
    int position = offset;
    
    for(int i = 0; i < n; i++){
        int x;
        char direction;
        cin >> x >> direction;

        if(direction == 'L'){
            for(int j = 0; j < x; j++){
                visitied[--position]++;
            }
        }
        else if(direction == 'R'){
            for(int j = 0; j < x; j++){
                visitied[position++]++;
            }
        }
    }

    int area = 0;
    for(int i = 0; i < range; i++){
        if(visitied[i] >= 2){
            area++;
        }
    }

    cout << area << endl;

    return 0;
}