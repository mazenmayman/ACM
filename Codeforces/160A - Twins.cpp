#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int i, n, x, sum = 0, count = 0;
    int new_sum = 0;
    vector<int> myvector;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        myvector.push_back(x);
    }
    sort(myvector.begin(), myvector.end());

    for (i = n-1; i >= 0; i--) {
        new_sum += myvector[i];
        count++;
        if (new_sum > (sum - new_sum)) {
            break;
        }
    }

    cout << count << endl;
    
    return 0;
}