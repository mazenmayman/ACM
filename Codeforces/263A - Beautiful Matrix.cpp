#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int row, column;
    int A[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> A[i][j];
            if(A[i][j] == 1){
                row = i+1;
                column = j+1;
            }
        }
    }
    
    cout << abs(row-3) + abs(column-3) << endl;
    
    return 0;
}