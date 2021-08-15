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
        if(n == 0) {
            break;
        }
        vector < pair <int, int> > a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        vector <int> b(n);
        for(int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        sort(b.begin(), b.end());
        vector <int> res(n);
        for(int i = 0; i < n; ++i) {
            res[a[i].second] = b[i];
        }
        for(const auto& it : res) {
            cout << it << endl;
        }
        cout << endl;
    }
    return 0;
}