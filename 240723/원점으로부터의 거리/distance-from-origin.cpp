#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

#define Max_n 1000
using namespace std;

class Point {
    public:
    int index, x, y;
    int distance;

    Point () {}
    Point(int index, int x, int y){
        this->index = index;
        this->x = x;
        this->y = y;
        this->distance = abs(x) + abs(y);
    }
};

bool Cmp(const Point &a, const Point &b){
    if(a.distance == b.distance){
        return a.index < b.index;
    }
    return a.distance < b.distance;
}

Point points[Max_n];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        points[i] = Point(i+1, x, y);
    }

    sort(points, points + n, Cmp);

    for(int i = 0; i < n; i++){
        cout << points[i].index << endl;
    }

    return 0;
}