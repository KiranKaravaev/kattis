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
    string s;
    cin >> s;
    map <char, int> cnt;
    for(const auto& c : s) {
        ++cnt[c];
    }
    int res = 0;
    for(const auto& it : cnt) {
        res += it.second % 2;
    }
    cout << max(0, res - 1) << endl;
    return 0;
}