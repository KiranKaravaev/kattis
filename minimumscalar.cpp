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
    int t;
    cin >> t;
    for(int ind = 1; ind <= t; ++ind){
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a, a + n);
        long long b[n];
        for(int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        sort(b, b + n);
        long long res = 0, res1 = 0;
        for(int i = 0; i < n; ++i) {
            res += a[i] * b[n - i - 1];
            res1 += b[i] * a[n - i - 1];
        }
        cout << "Case #" << ind << ": " << min(res, res1) << endl;
    }
    return 0;
}