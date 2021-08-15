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
        double s = 0;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            s += a[i];
        }
        s /= n;
        int k = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i] > s) {
                ++k;
            }
        }
        printf("%.3lf%\n", (100.0 * k) / n);
    }
    return 0;
}