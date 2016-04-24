#include <iostream>
#include <string>
using namespace std;

int main(){
    int i;
    string enc_password;
    string digits[10];
    string sub;

    cin >> enc_password;
    for (i = 0; i < 10; i++)
    {
        cin >> digits[i];
    }

    i = 0;
    while (i < 8){
        sub = enc_password.substr(i * 10, 10);
        if (sub.compare(digits[0]) == 0)
            cout << "0";
        else if (sub.compare(digits[1]) == 0)
            cout << "1";
        else if (sub.compare(digits[2]) == 0)
            cout << "2";
        else if (sub.compare(digits[3]) == 0)
            cout << "3";
        else if (sub.compare(digits[4]) == 0)
            cout << "4";
        else if (sub.compare(digits[5]) == 0)
            cout << "5";
        else if (sub.compare(digits[6]) == 0)
            cout << "6";
        else if (sub.compare(digits[7]) == 0)
            cout << "7";
        else if (sub.compare(digits[8]) == 0)
            cout << "8";
        else
            cout << "9";
        i++;
    }
}