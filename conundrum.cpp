#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int res = 0;
    for(int i = 0; s[i]; i += 3) {
        if(s[i] != 'P' && s[i] != 'p') {
            ++res;
        }
        if(s[i + 1] != 'E' && s[i + 1] != 'e') {
            ++res;
        }
        if(s[i + 2] != 'R' && s[i + 2] != 'r') {
            ++res;
        }
    }
    cout << res << endl;
}