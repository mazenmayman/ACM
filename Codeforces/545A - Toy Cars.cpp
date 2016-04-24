#include <iostream>
using namespace std;

int main(){
    int A[100][100];
    int result[100] = {0};
    int n, counter, cars_count = 0;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        counter = 0;
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
            if(A[i][j] != 1 && A[i][j] != 3){
                counter++;
            }
        }
        if(counter == n){
            result[i] = 1;
            cars_count++;
        }
    }
    
    cout << cars_count << endl;
    if(cars_count) {
        bool first_flag = true;
        for(int i = 0; i < n; i++){
            if(result[i] == 1){
                if(first_flag){
                    cout << i+1;
                    first_flag = false;
                }
                else{
                    cout << " " << i+1;
                }
            }
        }
        cout << endl;
    }
    return 0;
}