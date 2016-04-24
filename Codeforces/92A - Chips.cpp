#include <iostream>
using namespace std;

int main(){
    int n, m, i;
    cin >> n >> m;
    
    i = 1;
    while(m-i >= 0){
        m -= i;
        i++;
        if(i> n)
            i = i % n;
    }
    
    cout << m << endl;
}