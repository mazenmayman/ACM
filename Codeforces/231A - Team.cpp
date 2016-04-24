#include <iostream>
using namespace std;
 
int main() {
    int n, x, result = 0;
    int k = 0, c = 3;
    cin >> n;
 
    while (n--) {
        while (c--) {
            cin >> x;
            if (x)
                k++;
        }
 
        if (k>1)
            result++;
        c = 3;
        k = 0;
    }
 
    cout << result << endl;
    
    return 0;
}