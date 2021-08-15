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
    int max_v = INT_MIN;
    int prev_t, prev_s;
    cin >> prev_t >> prev_s;
    --n;
    while(n--) {
        int t, s;
        cin >> t >> s;
        max_v = max(max_v, (s - prev_s) / (t - prev_t));
        prev_s = s;
        prev_t = t;
    }
    cout << max_v << endl;
    return 0;
}