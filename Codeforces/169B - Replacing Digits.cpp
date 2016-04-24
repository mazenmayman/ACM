#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    
    string a, b;
    cin >> a >> b;
    
    sort(b.rbegin(), b.rend());
    
    int i = 0, j = 0;
    while(i < b.length() && j < a.length()){
        if(b[i] > a[j]){
            a[j] = b[i];
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    
    cout << a << endl;
    return 0;
}