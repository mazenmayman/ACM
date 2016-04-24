#include <iostream>
#include <vector>
using namespace std;

vector<int> vec, arr;


int main(){
    int n, k, x;
    cin >> n >> k;
    
    int sum = 0, min = 100*n+1, min_idx = 1;
    
    vec.resize(n);
    arr.push_back(0);
    for(int i = 0; i < n; i++){
        cin >> x;
        vec[i] = x;
        sum += x;
        arr.push_back(sum);

    }
    
    for(int i = k; i <= n; i++){
        if((arr[i] - arr[i-k]) < min){
            min = arr[i] - arr[i-k];
            min_idx = i-k+1;
        }
    }
    
    cout << min_idx << endl;
    return 0;
}