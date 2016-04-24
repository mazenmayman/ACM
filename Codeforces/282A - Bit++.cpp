#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i, x = 0;
    string k;
    bool add, sub;
    
    cin >> n;
    while(n--){
        add = false;
        sub = false;
        cin >> k;
        i = 0;
        while(i<3){
            if(k[i] == '+'){
                x++;
                break;
            }
            else if(k[i] == '-'){
                x--;
                break;
            }
            i++;
        }
    }
    cout << x;
    return 0;
}