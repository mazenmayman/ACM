#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string hello = "hello";
    string input;
    cin >> input;
    
    int i, j;
    for(i = 0, j = 0; i < input.size() && j < hello.size(); i++)
    {
        if(input[i] == hello[j])
            j++;
    }

    if(j == hello.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}