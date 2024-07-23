#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Health {
    public:
    string name;
    int height, weight;

    Health () {}
    Health(string name, int height, int weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(const Health &a, const Health &b){
    return a.height < b.height;
}

int main(){

    int n;
    cin >> n;

    Health healths[n];

    for(int i = 0; i < n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        healths[i] = Health(name, height, weight);
    }

    sort(healths, healths + n, cmp);

    for(int i = 0; i < n; i++){
        cout << healths[i].name << " " << healths[i].height << " " << healths[i].weight << endl;
    }

    return 0;
}