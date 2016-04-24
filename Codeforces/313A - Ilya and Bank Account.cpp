#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, copy;
    int n, n1, n2;
    
    cin >> s;
    
    n = atoi(s.c_str());
    copy = s;
    n1 = atoi(copy.substr(0, copy.length()-1).c_str());
    copy = s;
    n2 = atoi(copy.erase(copy.length()-2, 1).c_str());
    
    cout << max(n, max(n1, n2)) << endl;
    
    return 0;
}