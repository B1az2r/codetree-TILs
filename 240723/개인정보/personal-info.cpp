#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Student {
    public:

    string name;
    int height;
    double weight;

    Student () {}
    Student(string name, int height, double weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool Cmp1(const Student &a, const Student &b){
    return a.name < b.name;
}

bool Cmp2(const Student &a, const Student &b){
    return a.height > b.height;
}

Student students [5];

int main(){

    for(int i = 0; i < 5; i++){
        string name;
        int height;
        double weight;
        
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }

    sort(students, students + 5, Cmp1);

    cout << "name" << endl;

    for(int i = 0; i < 5; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }
    cout << endl;

    sort(students, students + 5, Cmp2);

    cout << "height" << endl;

    for(int i = 0; i < 5; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }    


    return 0;
}