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
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[n], mx_a = 0;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            mx_a = max(mx_a, a[i]);
        }
        int b[m], mx_b = 0;
        for(int i = 0; i < m; ++i) {
            cin >> b[i];
            mx_b = max(mx_b, b[i]);
        }
        cout << (mx_a >= mx_b ? "Godzilla" : "MechaGodzilla") << endl;
    }
    return 0;
}