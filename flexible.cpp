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
    int w, p;
    cin >> w >> p;
    int a[p];
    set <int> res;
    res.insert(w);
    for(int i = 0; i < p; ++i) {
        cin >> a[i];
        res.insert(a[i]);
        res.insert(w - a[i]);
    }
    for(int i = 0; i < p - 1; ++i) {
        for(int j = i + 1; j < p; ++j) {
            res.insert(a[j] - a[i]);
        }
    }
    for(const auto& it : res) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}