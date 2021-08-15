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
    map < vector <int>, int> cnt;
    int mx = 0;
    for(int i = 0; i < n; ++i) {
        vector <int> a(5);
        for(int j = 0; j < 5; ++j) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        ++cnt[a];
        mx = max(mx, cnt[a]);
    }
    int res = 0;
    for(const auto& it : cnt) {
        if(it.second == mx) {
            res += mx;
        }
    }
    cout << res << endl;
    return 0;
}