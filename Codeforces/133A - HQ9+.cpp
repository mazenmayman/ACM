#include <iostream>
#include <string>

using namespace std;

int main(){
    bool output = false;
    int i = 0;
    string p;
    cin >> p;
    
    while (i < p.size()){
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            output = true;
            break;
        }
        i++;
    }

    if(output)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}