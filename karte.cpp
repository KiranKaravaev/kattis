#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int main() {
    string s;
    cin >> s;
    map <char, map <string, bool> > m;
    for(int i = 0; i < s.size(); i += 3) {
        string num;
        num += s[i + 1];
        num += s[i + 2];
        if(m[s[i]][num]) {
            cout << "GRESKA" << endl;
            return 0;
        } else {
            m[s[i]][num] = true;
        }
    }
    string characters = "PKHT";
    for(const auto& c : characters) {
        cout << 13 - m[c].size() << " ";
    }
    cout << endl;
    return 0;
}