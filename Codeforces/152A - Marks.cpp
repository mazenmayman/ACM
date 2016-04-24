#include<iostream>
#include <vector>
using namespace std;

int main(){
    
    int n, m, mark, max = 0, successful_students = 0;
    cin >> n >> m;
    
    vector<string> student_marks (n);
    vector<int> result (n, 0);
    
    for(int i = 0; i < n; i++){
        cin >> student_marks[i];
    }
    
    for(int i = 0; i < m; i++){
        max = 0;
        for(int j = 0; j < n; j++){
            mark = student_marks[j][i] - '0';
            if(mark > max){
                max = mark;
            }
        }
        
        for(int j = 0; j < n; j++){
            if(max == (student_marks[j][i] - '0')){
                if(result[j] == 0){
                    result[j] = 1;
                    successful_students += 1;
                }
            }
        }
    }
    
    cout << successful_students << endl;
    return 0;
}