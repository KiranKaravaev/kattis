#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int square(int* a) {
    if(a[1] > a[3] || a[0] < a[2]) {
        return 0;
    }
    return min(a[0], a[2]) * min(a[1], a[3]);
}

int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a + 4);
    int res = 0;
    do {
        res = max(res, square(a));
    } while(next_permutation(a, a + 4));
    cout << res << endl;
    return 0;
}