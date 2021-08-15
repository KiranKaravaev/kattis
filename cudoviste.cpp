#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int res[5];

int main() {
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i <= n - 2; ++i) {
        for(int j = 0; j <= m - 2; ++j) {
            if(a[i][j] != '#' && a[i + 1][j] != '#' && a[i][j + 1] != '#' && a[i + 1][j + 1] != '#') {
                int cnt = 0;
                if (a[i][j] == 'X') {
                    ++cnt;
                }
                if (a[i + 1][j] == 'X') {
                    ++cnt;
                }
                if (a[i][j + 1] == 'X') {
                    ++cnt;
                }
                if (a[i + 1][j + 1] == 'X') {
                    ++cnt;
                }
                ++res[cnt];
            }
        }
    }
    for(const auto & r : res) {
        cout << r << endl;
    }
    return 0;
}