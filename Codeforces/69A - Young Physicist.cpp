#include <iostream>
using namespace std;


int sum[3] = {0, 0, 0};

int main(){
    int n, x;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> x;
            sum[j] += x;
        }
    }
    
    bool flag = true;
    for(int i = 0; i < 3; i++){
        if(sum[i] != 0)
            flag = false;
    }
    
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}