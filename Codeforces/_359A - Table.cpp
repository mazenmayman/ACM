#include <iostream>
using namespace std;

int result = 4;
int n, m, i, j, t;

int main(){
    cin >> n >> m;
    for(i = 0; i < n; ++i){
        for(j = 0; j < m; ++j){
            cin >> t;
            if( (i == 0 || i == n-1 || j == 0 || j == m-1) && t == 1)
                result = 2;
        }
    }
    cout << result;
    return 0;
}