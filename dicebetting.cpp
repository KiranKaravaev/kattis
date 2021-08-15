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
    int n, s, k;
    cin >> n >> s >> k;
    if(n < k) {
        cout << 0 << endl;
    } else {
        double p = 1;
        for(int i = 0; i < k; ++i) {
            p *= (s - i);
        }
        double res = 1;
        for(int i = n; i > n - k; --i) {
            res *= i;
        }
        cout << res << endl;
        for(int i = 0; i < n; ++i) {
            res /= s;
        }
        printf("%.7lf\n", res);
    }
    return 0;
}