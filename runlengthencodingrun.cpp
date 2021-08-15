#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    char op;
    cin >> op;
    if(op == 'D') {
        char c;
        int cnt;
        while(cin >> c >> cnt) {
            while(cnt--) {
                cout << c;
            }
        }
        cout << endl;
    } else {
        string s;
        cin >> s;
        char prev = s[0];
        int cnt = 0;
        for(const auto& c : s) {
            if(c == prev) {
                ++cnt;
            } else {
                cout << prev << cnt;
                cnt = 1;
            }
            prev = c;
        }
        cout << prev << cnt << endl;
    }
    return 0;
}