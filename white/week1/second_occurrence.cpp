#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    int i;
    for (i = 0; i < s.size(); ++i) {
        if (s[i] == 'f') {
            ++count;
        }
        if (count == 2) {
            break;
        }
    }
    if (count == 1) {
        cout << -1 << endl;
    } 
    else if (count == 2) {
        cout << i << endl;
    }
    else {
        cout << -2 << endl;
    }

    return 0;
}