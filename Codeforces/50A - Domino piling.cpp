#include <iostream>
using namespace std;


int main() {
    
    int m, n, a, b;
    cin >> m >> n;
    a = m * n;  // board area
    b = 2;      // domina area
    
    cout << a / b << endl;
    
    return 0;
}