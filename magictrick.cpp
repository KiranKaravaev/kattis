#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;
    map <char, bool> used;
    for(auto c : s) {
        if(used[c]) {
            cout << 0 << endl;
            return 0;
        }
        used[c] = true;
    }
    cout << 1 << endl;
    return 0;
}
