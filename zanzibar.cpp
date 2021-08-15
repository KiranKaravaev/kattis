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
        int n, prev;
        cin >> prev;
        int res = 0;
        while(cin >> n) {
            if(n == 0) {
                break;
            }
            res += max(0, n - prev * 2);
            prev = n;
        }
        cout << res << endl;
    }
    return 0;
}