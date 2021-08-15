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

int p, a, b, c, d, n;

double price(int k) {
    return p * (sin(a * k + b) +cos(c * k + d) + 2);
}

int main() {
    cin >> p >> a >> b >> c >> d >> n;
    double mn = INT_MAX, mx = INT_MIN, prev = ;
    for(int i = 1; i <= n; ++i) {
        mx = max(mx, price(i));
        mn = min(mn, price(i));
    }
    printf("%.6lf\n", mx - mn);
    return 0;
}