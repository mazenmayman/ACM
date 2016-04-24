#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, count = 0;
    string s;
    
    cin >> n >> s;
    
    int i = 1;
    while(i<n){
        if(s[i] == s[i-1]){
            s.erase(i, 1);
            count++;
            n--;
        }
        else{
            i++;
        }
    }
    cout << count << endl;
    return 0;
}