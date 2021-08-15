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
    cin >> n;
    int res = 0;
    while(n--) {
        string s;
        cin >> s;
        for(int i = 0; i <= max(0, (int)s.size() - 4); ++i) {
            string t;
            for(int j = i; j < i + 4; ++j) {
                if(s[j] >= 'A' && s[j] <= 'Z') {
                    t += char(s[j] + 32);
                } else {
                    t += s[j];
                }
            }
            if(t == "pink" || t == "rose") {
                ++res;
                break;
            }
        }
    }
    if(res) {
        cout << res << endl;
    } else {
        cout << "I must watch Star Wars with my daughter" << endl;
    }
    return 0;
}