#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, prev, current;
    cin >> n;
    cin >> prev;
    int count = 1;
    
    while (--n) {
        cin >> current;
        if (current != prev)
            count++;
        prev = current;
    }
    
    cout << count << endl;
    
    return 0;
}