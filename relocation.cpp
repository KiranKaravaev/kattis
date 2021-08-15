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
    int n, q;
    cin >> n >> q;
    int d[n];
    for(int i = 0; i < n; ++i) {
        cin >> d[i];
    }
    while(q--) {
        int t;
        cin >> t;
        if(t == 1) {
            int c, x;
            cin >> c >> x;
            d[c - 1] = x;
        } else {
            int a, b;
            cin >> a >> b;
            cout << abs(d[a - 1] - d[b - 1]) << endl;
        }
    }
    return 0;
}