#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, first_sum = 0, second_sum = 0;
    string s, digit;
    
    cin >> n;
    cin >> s;
    
    int i, j;
    for(i = 0, j = n-1; i < n/2; i++, j--){
        if((s[i] != '4' && s[i] != '7') || (s[j] != '4' && s[j] != '7'))
            break;
        digit = "";
        digit += s[i];
        first_sum += atoi(digit.c_str());
        digit = "";
        digit += s[j];
        second_sum += atoi(digit.c_str());
    }
    
    if((first_sum == second_sum) && (i == n/2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}