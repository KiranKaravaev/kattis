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
    int n, m;
    cin >> n >> m;
    int k = 0, res = 0;
    while(m--) {
        string s;
        cin >> s;
        int p;
        cin >> p;
        if(s == "leave") {
            k -= p;
        } else {
            if(p > n - k) {
                ++res;
            } else {
                k += p;
            }
        }
    }
    cout << res << endl;
    return 0;
}