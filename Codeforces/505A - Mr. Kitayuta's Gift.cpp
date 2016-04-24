#include <iostream>
#include <string>
using namespace std;

bool check_palindrom(string s){
    for(int i = 0, j = s.length()-1; i < s.length()/2; i++, j--){
        if(s[i] != s[j])
            return false;
    }
    return true;
}

int main(){
    string s, copy;
    cin >> s;
    copy = s;
    
    
    int i = s.length();
    while(i >= 0){
        for(int j = 97; j < 123; j++){
            copy = s;
            char c = char(j);
            copy.insert(i, 1, c);
            if(check_palindrom(copy)){
                cout << copy << endl;
                return 0;
            }
        }
        i--;
    }
    cout << "NA" << endl;
    
    return 0;
}