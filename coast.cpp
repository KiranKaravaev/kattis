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

int n, m, k;
char a[1111][1111];
int X[4] = {-1, 1, 0, 0};
int Y[4] = {0, 0, -1, 1};

bool is_good(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs1(int i, int j) {
    a[i][j] = '2';
    for(int ind = 0; ind < 4; ++ind) {
        int I = i + Y[ind];
        int J = j + X[ind];
        if(is_good(I, J) && a[I][J] == '0') {
            dfs1(I, J);
        }
    }
}

void dfs(int i, int j) {
    a[i][j] = '0';
    for(int ind = 0; ind < 4; ++ind) {
        int I = i + Y[ind];
        int J = j + X[ind];
        if(is_good(I, J)) {
            if(a[I][J] == '1') {
                dfs(I, J);
            } else if(a[I][J] == '2') {
                ++k;
            }
        } else {
            ++k;
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
    for(int i = 0; i < n; ++i) {
        if(a[i][0] == '0') {
            dfs1(i, 0);
        }
        if(a[i][m - 1] == '0') {
            dfs1(i, m - 1);
        }
    }
    for(int j = 0; j < m; ++j) {
        if(a[0][j] == '0') {
            dfs1(0, j);
        }
        if(a[n - 1][j] == '0') {
            dfs1(n - 1, j);
        }
    }
    /*cout << endl;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;*/
    int res = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == '1') {
                k = 0;
                dfs(i, j);
                //cout << k << endl;
                res += k;
            }
        }
    }
    cout << res << endl;
    return 0;
}