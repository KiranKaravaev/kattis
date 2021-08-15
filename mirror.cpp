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
    for(int ind = 1; ind <= t; ++ind){
        int n, m;
        cin >> n >> m;
        char a[n][m];
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                cin >> a[i][j];
            }
        }
        cout << "Test " << ind << endl;
        for(int i = n - 1; i >= 0; --i) {
            for(int j = m - 1; j >= 0; --j) {
                cout << a[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}