#include <iostream>
#include <string>
using namespace std;


int main(){
    string s1, s2;
    char c1, c2;
    int result = 0;
    cin >> s1 >> s2;
    
    int i = 0;
    while(i < s1.length()){
        c1 = tolower(s1[i]);
        c2 = tolower(s2[i]);
        if (c1 > c2){
            result = 1;
            break;
        }
        if (c1 < c2){
            result = -1;
            break;
        }
        i++;
    }
    
    cout << result << endl;
    return 0;
}