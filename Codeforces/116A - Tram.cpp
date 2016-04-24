#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int a, b;
    int max = 0, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        sum -= a;
        sum += b;
        
        if(sum > max){
            max = sum;
        }
    }
    
    cout << max << endl;
    return 0;
}