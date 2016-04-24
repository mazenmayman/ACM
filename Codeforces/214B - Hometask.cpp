#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, m, sum = 0;
    map<int, int> mymap;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        sum += m;
        mymap[m]++;
    }
    
    if(mymap[0] == 0){
        cout << "-1" << endl;
        return 0;
    }
    
    if(sum == 0){
        cout << "0" << endl;
        return 0;
    }
    
    if(sum % 3 == 1){
        
        auto it = mymap.begin();
        
        for(; it != mymap.end(); ++it){

            if(sum %3 == 0)
                break;

            if((it->first) %3 == 1){
                it->second--;
                sum -= it->first;
                break;
            }
        }
    }
    
    if(sum % 3 == 2){
        
        auto it = mymap.begin();
        
        for(; it != mymap.end(); ++it){
            
            if(sum %3 == 0)
                break;
            
            if((it->first) %3 == 2){
                it->second--;
                sum -= it->first;
                break;
            }
        }
    }
    
    if(sum % 3 == 1){
        
        int c = 0;
        auto it = mymap.begin();
        for(; it != mymap.end(); ++it){

            if(sum %3 == 0)
                break;
            
            if( ( (it->first) %3 == 2 ) && (it->second >= 1) ){
                if(it->second >= 2){
                    sum -= (2-c)*it->first;
                    it->second -= (2-c);
                    c++;
                }
                else{
                    sum -= it->first;
                    it->second -= 1;
                    c++;
                }
                
                if(c >= 2)
                    break;
            }
        }
    }
    
    if(sum % 3 == 2){
        
        int c = 0;
        auto it = mymap.begin();
        for(; it != mymap.end(); ++it){
            
            if(sum %3 == 0)
                break;

            if( ( (it->first) %3 == 1 && (it->second >= 1))){
                if(it->second >= 2){
                    sum -= (2-c)*it->first;
                    it->second -= (2-c);
                    c++;
                }
                else{
                    sum -= it->first;
                    it->second -= 1;
                    c++;
                }

                if(c >= 2)
                    break;
            }
        }
    }

    if(sum == 0){
        cout << "0" << endl;
        return 0;
    }
    
    auto it = mymap.rbegin();
    for(; it != mymap.rend(); ++it){
        for(int i = 0; i < it->second; i++){
            cout << it->first;
        }
    }
    
    cout << endl;
    
    return 0;
}