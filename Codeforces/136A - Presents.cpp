#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, i;
    int a[100], b[100];
    
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int p;
    for(i = 0; i < n; i++){
        p = a[i];
        b[p-1] = i + 1;
    }
    
    for(i = 0; i < n - 1; i++){
        cout << b[i] << " ";
    }
    
    cout << b[n-1] << endl;
    
    return 0;
}