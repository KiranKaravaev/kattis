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

int cnt[1000];

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = 1; i < 1000; i += a + b) {
        for(int j = i; j < i + a; ++j) {
            ++cnt[j];
        }
    }
    for(int i = 1; i < 1000; i += c + d) {
        for(int j = i; j < i + c; ++j) {
            ++cnt[j];
        }
    }
    int p, m, g;
    cin >> p >> m >> g;
    cout << (!cnt[p] ? "none" : cnt[p] == 1 ? "one" : "both") << endl;
    cout << (!cnt[m] ? "none" : cnt[m] == 1 ? "one" : "both") << endl;
    cout << (!cnt[g] ? "none" : cnt[g] == 1 ? "one" : "both") << endl;
    return 0;
}