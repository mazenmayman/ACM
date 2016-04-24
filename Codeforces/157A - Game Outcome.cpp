#include <iostream>
#include <string>

using namespace std;

int n, arr[30][30];

bool check_win(int row, int col){
    
    int sum_row = 0, sum_col = 0;

    for(int i = 0; i < n; i++){
        sum_col += arr[i][col];
    }
    for(int j = 0; j < n; j++){
        sum_row += arr[row][j];
    }
    
    if(sum_col > sum_row)
        return true;
    
    // else
    return false;
}
               
int main(){
    int count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(check_win(i, j))
               count++;
        }
    }
    
    cout << count << endl;
}