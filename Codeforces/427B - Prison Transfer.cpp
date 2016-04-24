#include <iostream>
#include <vector>
using namespace std;

vector<int> vec, arr;
int n, t, c, i, x;


int main(){
    int count = 0;
    cin >> n >> t >> c;
    arr.push_back(0);
    for(i = 1; i <= n; i++){
        cin >> x;
        vec.push_back(x);
        if(x > t)
            arr.push_back(arr[i-1] + 0);
        else
            arr.push_back(arr[i-1] + 1);
    }
    
    for(i = c; i <= n; i++){
        if((arr[i] - arr[i-c]) == c)
            count++;
    }
    
    cout << count << endl;
    return 0;
}