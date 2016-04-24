#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> myvec;
    int n, x, y;
    cin >> n;
    int i = n;
    while(i--){
        cin >> x;
        myvec.push_back(x);
    }
    sort(myvec.begin(), myvec.end());
    y = 1;
    for(i=0; i<n; i++){
        if(myvec[i] == i+1){
            y = i+2;
        }
        else {
            break;
        }
    }
    
    cout << y << endl;
    return 0;
}