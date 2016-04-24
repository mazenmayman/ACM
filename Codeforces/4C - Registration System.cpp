#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> mymap;
    string name;
    int n;
    
    cin >> n;
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        getline(cin, name);
        if(mymap[name] == 0){
            cout << "OK" << endl;
            mymap[name]++;
        }
        else{
            cout << name + to_string(mymap[name]) << endl;
            mymap[name]++;
        }
    }
    return 0;
}