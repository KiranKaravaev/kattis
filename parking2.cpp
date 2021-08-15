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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        int min_d = INT_MAX;
        for(int p = 0; p < 100; ++p) {
            if(p > a[0]) {
                min_d = min(min_d, 2 * (p - a[0]) + 2 * abs(a[n - 1] - p));
            } else {
                min_d = min(min_d, 2 * (a[n - 1] - p));
            }
        }
        cout << min_d << endl;
    }
    return 0;
}