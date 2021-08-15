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
    int n, p;
    cin >> n >> p;
    int res = 0, s = 0;
    while(n--) {
        int a;
        cin >> a;
        s += a - p;
        if(s < 0) {
            s = 0;
        }
        res = max(res, s);
    }
    cout << res << endl;
    return 0;
}