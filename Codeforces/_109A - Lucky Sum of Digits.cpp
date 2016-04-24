#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, i, c4, c7;
    cin >> n;
    for (int c7 = n/7; c7 >= 0; c7--)
    {
        if ( (n - c7*7) % 4 == 0)
        {
            int c4 = (n - c7*7) / 4;
            for (i = 0; i < c4; i++)
                cout << 4;
            
            for (i = 0; i < c7; i++)
                cout << 7;

            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}