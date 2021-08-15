#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

long long ssd(int b, int n) {
    long long res = 0;
    while(n) {
        res += (n % b) * (n % b);
        n /= b;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k, b, n;
        cin >> k >> b >> n;
        cout << k << " " << ssd(b, n) << endl;
    }
    return 0;
}