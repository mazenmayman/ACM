#include <iostream>
#include <iostream>
using namespace std;


void insertion_sort(int arr[], int n, string names[]);

string names[100], crew_status;
int arr[100];
int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> names[i];
        cin >> crew_status;
        if(crew_status == "captain")
            arr[i] = 3;
        else if (crew_status == "man")
            arr[i] = 2;
        else if ((crew_status == "woman") || (crew_status == "child"))
            arr[i] = 1;
        else // rat
            arr[i] = 0;
    }
    insertion_sort(arr, n, names);
    
    for(int i = 0; i < n; i++){
        cout << names[i] << endl;
    }
    return 0;
}