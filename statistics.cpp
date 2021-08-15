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
    int n, ind = 1;
    while(cin >> n) {
        int mn = INT_MAX, mx = INT_MIN;
        while(n--) {
            int a;
            cin >> a;
            mn = min(mn, a);
            mx = max(mx, a);
        }
        cout << "Case " << ind << ": " << mn << " " << mx << " " << mx - mn << endl;
        ++ind;
    }
    return 0;
}