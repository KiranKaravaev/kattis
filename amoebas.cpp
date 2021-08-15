#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int n, m;
char a[111][111];
int X[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool is_good(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void dfs(int i, int j) {
    a[i][j] = '.';
    for(int ind = 0; ind < 8; ++ind) {
        int I = i + X[ind];
        int J = j + Y[ind];
        if(is_good(I, J) && a[I][J] == '#') {
            dfs(I, J);
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
    int k = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == '#') {
                ++k;
                dfs(i, j);
            }
        }
    }
    cout << k << endl;
    return 0;
}