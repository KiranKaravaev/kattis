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
    int n, m, k;
    cin >> n >> m >> k;
    deque <int> a(n), b(m), c(k);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    for(int i = 0; i < k; ++i) {
        cin >> c[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int res = 0;
    while(!a.empty()) {
        bool good = false;
        if(!b.empty()) {
            if(b.front() < a.front()) {
                good = true;
                b.pop_front();
            }
        }
        if(!good) {
            if(!c.empty()) {
                if(sqrt(2) * c.front() < a.front() * 2) {
                    good = true;
                    c.pop_front();
                }
            }
        }
        if(good) {
            ++res;
        }
        a.pop_front();
    }
    cout << res << endl;
    return 0;
}