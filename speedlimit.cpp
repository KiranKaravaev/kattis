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
    int n;
    while(cin >> n) {
        if(n == -1) {
            break;
        }
        int prev_t = 0, S = 0;
        while(n--) {
            int v, t;
            cin >> v >> t;
            S += v * (t - prev_t);
            prev_t = t;
        }
        cout << S << " miles" << endl;
    }
    return 0;
}