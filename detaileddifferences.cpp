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
    int t;
    cin >> t;
    while(t--) {
        string s, s1;
        cin >> s >> s1;
        cout << s << endl << s1 << endl;
        for(int i = 0; s[i]; ++i) {
            cout << (s[i] == s1[i] ? '.' : '*');
        }
        cout << endl << endl;
    }
    return 0;
}