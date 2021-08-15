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
    int e, f, c;
    cin >> e >> f >> c;
    int k = e + f;
    int res = 0;
    while(k >= c) {
        int cnt = k / c;
        res += k / c;
        k %= c;
        k += cnt;
    }
    cout << res << endl;
    return 0;
}