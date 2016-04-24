#include <iostream>
using namespace std;


int main(){
    int n, A = 0, F = 0, I = 0;
    char c;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        c = getchar();
        switch (c) {
            case 'A':
                A++;
                break;
            case 'F':
                F++;
                break;
            case 'I':
                I++;
                break;
        }
    }
    
    if(I == 0){
        cout << A << endl;
    }
    
    if(I == 1){
        cout << '1' << endl;
    }
    if(I > 1){
        cout << '0' << endl;
    }
    return 0;

}