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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long ost = 0;
        for(int i = 0; i < n; ++i) {
            long long a;
            cin >> a;
            ost += a % n;
        }
        cout << (ost % n == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}