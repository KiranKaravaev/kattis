#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int sum(int n) {
    int res = 0;
    while(n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int l, d, x;
    cin >> l >> d >> x;
    int mn = INT_MAX, mx = INT_MIN;
    for(int i = l; i <= d; ++i) {
        if(sum(i) == x) {
            mn = min(mn, i);
            mx = max(mx, i);
        }
    }
    cout << mn << endl << mx << endl;
    return 0;
}