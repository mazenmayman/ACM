#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> myvecotr;
    int n, m;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        myvecotr.push_back(m);
    }
    sort(myvecotr.begin(), myvecotr.end());
    
    int num_towers = 1;
    int heighst_tower = 1;
    int height = 1;
    for(int i = 1; i < myvecotr.size(); i++){
        if(myvecotr[i] == myvecotr[i-1]){
            height++;
        }
        else{
            if(height > heighst_tower){
                heighst_tower = height;
            }
            height = 1;
            num_towers++;
        }
    }
    if(height > heighst_tower){
        heighst_tower = height;
    }
    
    cout << heighst_tower << " " << num_towers << endl;
    return 0;
}