#include <iostream>
#include <string>

using namespace std;


class Agent{
    public:
    char codename;
    int score;

    Agent() {}

    Agent(char codename, int score){
        this->codename = codename;
        this->score = score;
    }
};


int main(){

    char codename;
    int score;

    Agent agents[5];

    for(int i = 0; i < 5; i++){
        cin >> codename >> score;
        agents[i] = Agent(codename, score);
    }

    char min_codename = agents[0].codename;
    int min = agents[0].score;


    for(int i = 1; i < 5; i++){
        if(min > agents[i].score){
            min = agents[i].score;
            min_codename = agents[i].codename;
        }
    }

    cout << min_codename << " " << min << endl;


    return 0;
}