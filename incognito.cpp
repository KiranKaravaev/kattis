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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map <string, int> cnt;
        while(n--) {
            string s, s1;
            cin >> s >> s1;
            ++cnt[s1];
        }
        long long res = 1;
        for(const auto& it : cnt) {
            res *= it.second + 1;
        }
        cout << res - 1 << endl;
    }
    return 0;
}