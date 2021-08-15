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
    int C, n;
    cin >> C >> n;
    int k = 0;
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a > k) {
            cout << "impossible" << endl;
            return 0;
        }
        k -= a;
        k += b;
        if(k > C) {
            cout << "impossible" << endl;
            return 0;
        }
        if(((C - k) && c)) {
            cout << "impossible" << endl;
            return 0;
        }
    }
    cout << (k ? "impossible" : "possible") << endl;
    return 0;
}