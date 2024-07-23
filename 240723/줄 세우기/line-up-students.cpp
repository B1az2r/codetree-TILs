#include <iostream>
#include <algorithm>
#include <string>

#define max_n 1000
using namespace std;

class Student {
    public:
    int height, weight, num;

    Student () {}

    Student(int height, int weight, int num){
        this->height = height;
        this->weight = weight;
        this->num = num;
    }
};

bool Cmp(const Student &a, const Student &b){
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.num < b.num;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

Student students[max_n];

int main(){
    int n;
    cin >> n;
    int num = 0;

    for(int i = 0; i < n; i++){
        int height, weight;
        cin >> height >> weight;
        students[i] = Student(height, weight, num);
        students[i].num = i;
    }

    sort(students, students + n, Cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].height << " " << students[i].weight << " " << students[i].num + 1 << endl;
    }

    return 0;
}