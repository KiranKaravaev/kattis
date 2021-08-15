#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map <int, int> cnt;
    int max_cnt = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            ++cnt[i + j];
            max_cnt = max(max_cnt, cnt[i + j]);
        }
    }
    for(auto it : cnt) {
        if(it.second == max_cnt) {
            cout << it.first << endl;
        }
    }
    return 0;
}