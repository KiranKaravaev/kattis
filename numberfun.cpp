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
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b == c || a - b == c || b - a == c || a * b == c || 1.0 * a / b == c || 1.0 * b / a == c ? "Possible" : "Impossible") << endl;
    }
    return 0;
}