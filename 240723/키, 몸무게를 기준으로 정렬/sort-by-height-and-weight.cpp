#include <iostream>
#include <algorithm>
#include <string>

#define max_n 10
using namespace std;

class Data {
    public:
    string name;
    int height, weight;

    Data () {}
    Data(string name, int height, int weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool Cmp(const Data &a, const Data &b){
    if(a.height == b.height){
        return a.weight > b.weight;
    }
    return a.height < b.height;
}

Data datas[max_n];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        int height, weight;

        cin >> name >> height >> weight;
        datas[i] = Data(name, height, weight);
    }
    
    sort(datas, datas + n, Cmp);

    for(int i = 0; i < n; i++){
        cout << datas[i].name << " " << datas[i].height << " " << datas[i].weight << endl;
    }


    return 0;
}