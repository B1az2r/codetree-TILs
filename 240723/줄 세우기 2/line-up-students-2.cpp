#include <iostream>
#include <string>
#include <algorithm>

#define Max_n 1000
using namespace std;

class Student {
    public:
    int h, w;
    int index;

    Student() {}
    Student(int index, int h, int w){
        this->h = h;
        this->w = w;
    }
};

bool Cmp(const Student &a, const Student &b){
    if(a.h == b.h){
        return a.w > b.w;
    }
    return a.h < b.h;
}

Student students[Max_n];

int main(){
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int h, w;
        cin >> h >> w;
        students[i] = Student(i + 1, h, w);
        students[i].index = i+1;
    }

    sort(students, students + n, Cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].h << " " << students[i].w << " " << students[i].index << endl;
    }

    return 0;
}