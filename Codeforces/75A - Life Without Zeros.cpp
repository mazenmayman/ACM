#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
using namespace std;


string remove_zeros(string s, int j){
    while(j >= 0){
        if(s[j] == 48)
            s.erase(j, 1);
        j--;
    }
    return s;
}

int main(){
    string s1, s2, sum;
    cin >> s1 >> s2;
    int x1, y1, sum1;
    int x2, y2, sum2;
    
    x1 = atoi(s1.c_str());
    y1 = atoi(s2.c_str());
    sum1 = x1 + y1;
    sum = to_string(sum1);
    
    s1 = remove_zeros(s1, s1.length()-1);
    s2 = remove_zeros(s2, s2.length()-1);
    sum = remove_zeros(sum, sum.length()-1);
    sum1 = atoi(sum.c_str());
    
    x2 = atoi(s1.c_str());
    y2 = atoi(s2.c_str());
    sum2 = x2 + y2;
    
    if(sum1 == sum2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}