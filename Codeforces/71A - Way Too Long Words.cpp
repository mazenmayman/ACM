#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n;
    unsigned long length;
    string input, result, s_length;
    cin >> n;
    
    while(n--)
    {

        cin >> input;
        length = input.size();
        if (length <= 10)
            cout << input << endl;
        else
        {
            s_length = to_string(length-2);
            result = "";
            result += input.at(0);
            result += s_length;
            result += input.at(length-1);
            cout << result << endl;
        }
    }
    return 0;
}