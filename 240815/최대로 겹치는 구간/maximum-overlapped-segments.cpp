#include <iostream>
using namespace std;

#define basic 100
#define max_n 100
#define r 200

int start[max_n];
int ending[max_n];
int check[r + 1];


int main(){

    int n;
    cin >> n;
    


    for(int i = 0; i < n; i++){
        cin >> start[i] >> ending[i];

        start[i] += basic;
        ending[i] += basic;
    }

    for(int i = 0; i < n; i++){
        for(int j = start[i]; j < ending[i]; j++){
            check[j]++;
        }
    }

    int max = 0;

    for(int i = 0; i <= r; i++){
        if(check[i] > max){
            max = check[i];
        }
    }

    cout << max;

    return 0;
}