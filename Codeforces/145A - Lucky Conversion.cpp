#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int fours = 0, sevens = 0;
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    int counter = 0;
    int i = 0;
    while(i < a.length()){
        if(a.at(i) != b.at(i)){
            counter++;
            if(a.at(i) == '4'){
                fours++;
            }
            else{
                sevens++;
            }
        }
        i++;
    }
    
    if(fours == 0){
        cout << sevens << endl;
        return 0;
    }
    if(sevens == 0){
        cout << fours << endl;
        return 0;
    }

    cout << max(fours, sevens) << endl;
    return 0;
}