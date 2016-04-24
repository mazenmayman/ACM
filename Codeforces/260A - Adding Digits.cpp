#include <iostream>
using namespace std;

int main() {
    int i, j;
    long long a, a1, b, n;
    cin >> a >> b >> n;
    
    for (i = 0; i < n; i++) {
        a = a * 10;
        for (j = 0; j < 10; j++) {
            a1 = a;
            a1 += j;
            if (a1%b == 0) {
                break;
            }
        }
        if (j == 10 && a1%b != 0) {
            cout << "-1" << endl;
            return 0;
        }
        if(a1%b == 0){
            cout << a1;
            for(int k = 0; k < n-i-1; k++){
                cout << '0';
            }
            cout << endl;
            return 0;

        }
        a = a1;
    }
    
}