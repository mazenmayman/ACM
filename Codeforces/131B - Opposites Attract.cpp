#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m;
    map<int, int> mymap;
    long long result;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        mymap[m]++;
    }
    
    int zeros = mymap[0];
    if(zeros>=2){
        if(zeros % 2 == 0){
            result = zeros/2;
            result *= zeros-1;
        }
        else{
            result = (zeros-1)/2;
            result *= zeros;
        }
    }
    else{
        result = 0;
    }

    
    for(int i = 10; i > 0; i--){
        if(mymap[i] && mymap[-i]){
            result += (long long) mymap[i] * (long long) mymap[-i];
        }
    }
    
    cout << result << endl;
    return 0;
}