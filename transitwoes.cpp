#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int s, t, n;
    cin >> s >> t >> n;
    int d[n + 1];
    for(int i = 0; i <= n; ++i) {
        cin >> d[i];
    }
    int b[n];
    for(int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    int c[n];
    for(int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    for(int i = 0; i < n; ++i) {
        s += d[i];
        s += (s % c[i]);
        s += b[i];
    }
    s += d[n];
    cout << (s < t ? "yes" : "no") << endl;
    return 0;
}