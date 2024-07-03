#include <iostream>
using namespace std;
int main() {
    int min,N,arr[100],cnt=0;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    min=arr[0];
    for(int i=0; i<N; i++){
        if(min>=arr[i]){
            min=arr[i];
        }
    }
    for(int i=0; i<N; i++){
        if(min==arr[i]){
            cnt++;
        }
    }
    cout<<min<<" "<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}