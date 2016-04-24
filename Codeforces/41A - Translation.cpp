#include <iostream>
#include <string>

using namespace std;

int main(){
    string s, t;
    
    cin >> s >> t;
    
    int i = 0;
    bool flag = true;
    int len1 = s.length();
    int len2 = t.length();
    while(i < len2){
        if(s[i] != t[len2-i-1]){
            flag = false;
            break;
        }
        i++;
    }
    
    if(flag && len1 == len2) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}