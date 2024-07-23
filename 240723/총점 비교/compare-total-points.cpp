#include <iostream>
#include <algorithm>
#include <string>

#define Max_n 10
using namespace std;

class Student {
    public:
    string name;
    int kor, eng, math;

    Student () {}
    Student(string name, int kor, int eng, int math){
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }
};

bool Cmp(const Student &a, const Student &b){
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}

Student students[Max_n];

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        int sub1, sub2, sub3;

        cin >> name >> sub1 >> sub2 >> sub3;
        students[i] = Student(name, sub1, sub2, sub3);
    }

    sort(students, students + n, Cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << endl;
    }

    return 0;
}