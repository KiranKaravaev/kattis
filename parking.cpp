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

int cnt[111];

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int k = 3;
    while(k--) {
        int l, r;
        cin >> l >> r;
        for(int i = l; i < r; ++i) {
            ++cnt[i];
        }
    }
    int res = 0;
    for(int i = 0; i < 111; ++i) {
        if(cnt[i] == 1) {
            res += a;
        } else if(cnt[i] == 2) {
            res += 2 * b;
        } else if(cnt[i] == 3) {
            res += 3 * c;
        }
    }
    cout << res << endl;
    return 0;
}