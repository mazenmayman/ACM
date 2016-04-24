#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int m, n, x;
    vector<int> A;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++){
        cin >> x;
        A.push_back(x);
    }
    
    sort(A.begin(), A.end());
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(A[i] < 0)
            sum += -A[i];
    }
    cout << sum << endl;
    return 0;
}