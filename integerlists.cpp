#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n;
        cin >> n;
        deque <int> d(n);
        char c;
        cin >> c;
        for(int i = 0; i < n; ++i) {
            scanf("%d%c", &d[i], &c);
        }
        bool rev = false, er = false;
        for(const auto& cmd : s) {
            if(cmd == 'R') {
                rev = !rev;
            } else {
                if(d.empty()) {
                    cout << "error" << endl;
                    er = true;
                    break;
                } else {
                    if (rev) {
                        d.pop_back();
                    } else {
                        d.pop_front();
                    }
                }
            }
        }
        if(!er) {
            cout << '[';
            for(int i = 0; i < d.size(); ++i) {
                int ind = i;
                if(rev) {
                    ind = d.size() - i - 1;
                }
                cout << d[ind];
                if(i < max(0, (int)d.size() - 1)) {
                    cout << ',';
                }
            }
            cout << ']' << endl;
        }
    }
    return 0;
}