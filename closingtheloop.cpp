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

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int t, ind = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        deque <int> r, b;
        while(n--) {
            int l;
            cin >> l;
            char c;
            cin >> c;
            if(c == 'R') {
                r.push_back(l);
            } else {
                b.push_back(l);
            }
        }
        sort(r.begin(), r.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        int k = 0, res = 0;
        while(!r.empty() && !b.empty()) {
            ++k;
            res += r.front() + b.front() - 2;
            r.pop_front();
            b.pop_front();
        }
        /*if(r.size() < b.size()) {
            if(!b.empty() && k) {
                res += b.front() - 1;
            }
        } else {
            if(!r.empty() && k) {
                res += r.front() - 1;
            }
        }*/
        cout << "Case #" << ind << ": " << res << endl;
        ++ind;
    }
    return 0;
}