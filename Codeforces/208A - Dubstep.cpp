#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int pos = s.find("WUB");
    while (pos != -1) {
        if (pos != 0 && (pos != s.size() - 3))
            s.replace(pos, 3, " ");
        else
            s.erase(pos, 3);

        pos = s.find("WUB");
    }
    cout << s << endl;
    return 0;
}