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

int n, m;
char a[55][55];
int X[4] = {-1, 1, 0, 0};
int Y[4] = {0, 0, -1, 1};

bool is_good(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int i, int j) {
    a[i][j] = 'W';
    for(int ind = 0; ind < 4; ++ind) {
        int I = i + Y[ind];
        int J = j + X[ind];
        if(is_good(I, J) && (a[I][J] == 'L' || a[I][J] == 'C')) {
            dfs(I, J);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i  = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for(int i  = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == 'L') {
                ++res;
                dfs(i, j);
            }
        }
    }
    cout << res << endl;
    return 0;
}