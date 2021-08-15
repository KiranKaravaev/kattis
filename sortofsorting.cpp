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
    int n;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        vector < pair <string, pair <int, string> > > v;
        for(int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            string t;
            t += s[0];
            t += s[1];
            v.push_back({t, {i, s}});
        }
        sort(v.begin(), v.end());
        for(const auto& it : v) {
            cout << it.second.second << endl;
        }
        cout << endl;
    }
    return 0;
}