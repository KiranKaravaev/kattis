#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int n, m;
int X[4] = {-1, 1, 0, 0};
int Y[4] = {0, 0, -1, 1};
char a[1111][1111];
int cnt[1111][1111];
bool used1[1111][1111];

bool is_good(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void f(int i, int j, int k, char p) {
    cnt[i][j] = k;
    for(int ind = 0; ind < 4; ++ind) {
        if(is_good(i + X[ind], j + Y[ind]) && a[i + X[ind]][j + Y[ind]] == p && !cnt[i + X[ind]][j + Y[ind]]) {
            f(i + X[ind], j + Y[ind], k, p);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int k = 1;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == '1' && !cnt[i][j]) {
                f(i, j, k, '1');
                ++k;
            }
        }
    }
    k = 1;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == '0' && !cnt[i][j]) {
                f(i, j, k, '0');
                ++k;
            }
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        --x1, --y1, --x2, --y2;
        if(a[x1][y1] == a[x2][y2]) {
            if(a[x1][y1] == '1') {
                if(cnt[x1][y1] == cnt[x2][y2]) {
                    cout << "decimal" << endl;
                } else {
                    cout << "neither" << endl;
                }
            } else {
                if(cnt[x1][y1] == cnt[x2][y2]) {
                    cout << "binary" << endl;
                } else {
                    cout << "neither" << endl;
                }
            }
        } else {
            cout << "neither" << endl;
        }
    }
    return 0;
}