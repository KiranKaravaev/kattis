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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        map <string, bool> used;
        string a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            used[a[i]] = true;
        }
        bool ok = true;
        for(int i = 0; i < n; ++i) {
            string t;
            for(int j = 0; j < a[i].size() - 1; ++j) {
                t += a[i][j];
                if(used[t]) {
                    ok = false;
                    break;
                }
            }
            if(!ok) {
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;

    }
    return 0;
}