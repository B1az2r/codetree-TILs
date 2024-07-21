#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    int arr1[100];
    int arr2[100];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    bool Equal = true;
    for(int i = 0; i < n; i++){
        if(arr1[i] != arr2[i]){
            Equal = false;
            break;
        }
    }
    
    if(Equal == true){
        cout << "Yes";
    }
    else{
        cout << "No";
    }


    return 0;
}