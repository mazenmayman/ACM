#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int count = 1;
    string s;
 
    cin >> s;
 
    int i = 1;
    while(s[i] != '\0'){
        if(s[i] != s[i-1])
            count= 1;
        else
            count++;
 
        if(count >= 7){
            cout << "YES" << endl;
            return 0;
        }
        i++;
    }
 
    cout << "NO" << endl;
    return 0;
}