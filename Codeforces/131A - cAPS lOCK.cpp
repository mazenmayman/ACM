#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    bool all_upper = false;
    bool rest_upper = false;
    bool first_lower = true;
    
    unsigned long i = s.size() - 1;
    
    while(i > 0 && isupper(s[i])){
        i--;
    }
    
    if(i==0){
        rest_upper = true;
        if (isupper(s[0]))
            all_upper = true;
        else
            first_lower = true;
    }
    
    if(all_upper || (first_lower && rest_upper)){
        i = 0;
        while(i < s.size()){
            if(islower(s[i]))
                s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
            i++;
        }
    }
    
    cout << s << endl;
    return 0;
}