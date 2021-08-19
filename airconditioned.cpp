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
    int n;
    cin >> n;
    vector < pair <int, int> > v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int L = v[0].first, R = v[0].second, res = 1;
    for(int i = 0; i < v.size(); ++i) {
        if(v[i].first <= R) {
            L = v[i].first;
            R = min(R, v[i].second);
        } else {
            ++res;
            L = v[i].first;
            R = v[i].second;
        }
    }
    cout << res << endl;
    return 0;
}

