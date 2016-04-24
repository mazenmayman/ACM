#include <iostream>
using namespace std;

int main ()
{
    double angle;
    int n;
    cin >> n;
    
    while (n--)
    {
        cin>> angle;
        double x = 360/(180-angle);
        if (x > int(x))
            cout<< "NO" <<endl;
        else
            cout<<"YES"<<endl;
    }
    
    return 0;
}