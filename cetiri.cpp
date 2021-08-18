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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int d = a[1] - a[0];
    if(a[1] + d == a[2]) {
        cout << a[2] + d << endl;
        return 0;
    }
    if(a[1] + 2 * d == a[2]) {
        cout << a[1] + d << endl;
        return 0;
    }
    d = a[2] - a[1];
    if(a[0] + 2 * d == a[1]) {
        cout << a[0] + d << endl;
        return 0;
    }
    cout << -1 << endl;
    return 0;
}