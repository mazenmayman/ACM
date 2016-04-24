#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

unordered_map<char, int> mymap;

int main(){
    string s;
    getline(cin, s, '{');
    getline(cin, s, '}');
    
    int count = 0, i = 0;
    unordered_map<char, int> mymap;

    while(s[i] != NULL){
        if(s[i] != ',' && s[i] != ' ')
            mymap[s[i]] += 1;
        i++;
    }
    
    for ( auto it = mymap.begin(); it != mymap.end(); ++it )
        count++;

    cout << count << endl;
}