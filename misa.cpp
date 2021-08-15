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
int X[8] = {1, 0, -1, 1, -1, 1, 0, -1};
int Y[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

bool is_good(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

int main() {
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    int mx = 0, k = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(a[i][j] == '.') {
                int k1 = 0;
                for(int ind = 0; ind < 8; ++ind) {
                    int I = i + Y[ind];
                    int J = j + X[ind];
                    if(is_good(I, J) && a[I][J] == 'o') {
                        ++k1;
                    }
                }
                mx = max(mx, k1);
            } else {
                for(int ind = 0; ind < 8; ++ind) {
                    int I = i + Y[ind];
                    int J = j + X[ind];
                    if(is_good(I, J) && a[I][J] == 'o') {
                        ++k;
                    }
                }
            }
        }
    }
    cout << k / 2 + mx << endl;
    return 0;
}