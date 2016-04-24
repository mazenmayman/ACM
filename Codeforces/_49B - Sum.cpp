#include <iostream>
using namespace std;

int base(int n)
{
    int m = 0;
    while (n){
        int y = n % 10;
        m = y > m ? y : m;
        n /= 10;
    }
    return m+1;
}

int main()
{
    int a, b, max_base;
    int add, x, result;
    int n, m;
    
    cin >> a >> b;
    n = base(a);
    m = base(b);
    max_base = m > n ? m : n;
    
    add = 0, result = 0;
    while (a || b|| add)
    {
        x = a % 10 + b % 10 + add;
        add = x / max_base;
        result++;
        a /= 10;
        b /= 10;
    }
    
    cout << result <<endl;
    return 0;
}