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
    string arr[5];
    map <char, int> cnt;
    int max_cnt = 0;
    for(int i = 0; i < 5; ++i) {
        cin >> arr[i];
        ++cnt[arr[i][0]];
        max_cnt = max(max_cnt, cnt[arr[i][0]]);
    }
    cout << max_cnt << endl;
    return 0;
}