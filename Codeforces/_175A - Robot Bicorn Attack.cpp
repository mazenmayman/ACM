#include <iostream>
#include <string>
using namespace std;

bool check(string &num) {
    if(num.length() == 1)
        return true;
    
    if(num[0] == '0' || num.length() > 7)
        return false;
    
    return atoi(num.c_str()) <= 1000000;
}
int main()
{    
    string s, snum1, snum2, snum3;
    int num1, num2, num3, sum = -1;
    cin >> s;
    
    for(int i = 1; i < s.length(); i++) {
        for(int j = i + 1; j < s.length(); j++) {
            snum1 = s.substr(0, i);;
            snum2 = s.substr(i, j - i);
            snum3 = s.substr(j);
            if(check(snum1) && check(snum2) && check(snum3))
                sum = max(sum, atoi(snum1.c_str()) + atoi(snum2.c_str()) + atoi(snum3.c_str()));
        }
    }
    cout << sum << endl;
    return 0;
}