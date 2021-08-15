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
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int res = 0;
    while(a.size() > 2) {
        res += a.back();
        a.pop_back();
        res += a.back();
        a.pop_back();
        a.pop_back();
    }
    for(const auto& it : a) {
        res += it;
    }
    cout << res << endl;
    return 0;
}