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
    int n, k;
    cin >> n >> k;
    set < vector <int> > res;
    for(int i = 0; i < n; ++i) {
        int a[k], b[k];
        for(int j = 0; j < k; ++j) {
            cin >> a[j];
            b[j] = a[j];
        }
        sort(b, b + k);
        vector <int> v;
        for(int j = 0; j < k; ++j) {
            for(int ind = 0; ind < k; ++ind) {
                if(a[j] == b[ind]) {
                    v.push_back(ind);
                    break;
                }
            }
        }
        cout << i << endl;
        for(int j = 0; j < k; ++j) {
            cout << v[j] << " ";
        }
        cout << endl;
        res.insert(v);
    }
    cout << res.size() << endl;
    return 0;
}