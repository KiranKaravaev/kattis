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
        int k, n;
        cin >> k >> n;
        cout << k << " " << (n * (n + 1)) / 2 << " " << (1 + 2 * n - 1) / 2 * n << " " << (0 + 2 * n) / 2 * (n + 1) << endl;
    }
    return 0;
}