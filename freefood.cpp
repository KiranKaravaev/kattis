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
    vector < pair <int, int> > v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int L = v[0].first, R = v[0].second, res = 0;
    for(int i = 1; i < n; ++i) {
        if(v[i].first <= R) {
            R = max(R, v[i].second);
        } else {
            res += R - L + 1;
            L = v[i].first;
            R = v[i].second;
        }
    }
    cout << res + R - L + 1 << endl;
    return 0;
}