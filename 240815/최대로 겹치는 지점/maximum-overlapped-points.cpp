#include <iostream>
using namespace std;

int x1[101];
int x2[101];
int check[101];

int main(){

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> x1[i] >> x2[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = x1[i]; j <= x2[i]; j++){
            check[j]++;
        }
    }

    int max = 0;

    for(int i = 1; i <= 100; i++){
        if(check[i] > max){
            max = check[i];
        }
    }

    cout << max;

    return 0;
}