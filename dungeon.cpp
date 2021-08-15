#include <iostream>
#include <bits//stdc++.h>
#include <queue>
using namespace std;

int n, m, k, dist[30][30][30];
char a[30][30][30];

bool is_true(int i, int j, int l) {
    return i >= 0 && i < n && j >= 0 && j < m && l >= 0 && l < k;
}

void bfs(int start_x, int start_y, int start_z) {
    dist[start_x][start_y][start_z] = 0;
    queue < pair <int, pair <int, int> > > q;
    q.push(make_pair(start_x, make_pair(start_y, start_z)));
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second.first;
        int z = q.front().second.second;
        q.pop();
        if(is_true(x - 1, y, z) && a[x - 1][y][z] == '.' && dist[x - 1][y][z] > dist[x][y][z] + 1) {
            dist[x - 1][y][z] = dist[x][y][z] + 1;
            q.push(make_pair(x - 1, make_pair(y, z)));
        }
        if(is_true(x + 1, y, z) && a[x + 1][y][z] == '.' && dist[x + 1][y][z] > dist[x][y][z] + 1) {
            dist[x + 1][y][z] = dist[x][y][z] + 1;
            q.push(make_pair(x + 1, make_pair(y, z)));
        }
        if(is_true(x, y - 1, z) && a[x][y - 1][z] == '.' && dist[x][y - 1][z] > dist[x][y][z] + 1) {
            dist[x][y - 1][z] = dist[x][y][z] + 1;
            q.push(make_pair(x, make_pair(y - 1, z)));
        }
        if(is_true(x, y + 1, z) && a[x][y + 1][z] == '.' && dist[x][y + 1][z] > dist[x][y][z] + 1) {
            dist[x][y + 1][z] = dist[x][y][z] + 1;
            q.push(make_pair(x, make_pair(y + 1, z)));
        }
        if(is_true(x, y, z - 1) && a[x][y][z - 1] == '.' && dist[x][y][z - 1] > dist[x][y][z] + 1) {
            dist[x][y][z - 1] = dist[x][y][z] + 1;
            q.push(make_pair(x, make_pair(y, z - 1)));
        }
        if(is_true(x, y, z + 1) && a[x][y][z + 1] == '.' && dist[x][y][z + 1] > dist[x][y][z] + 1) {
            dist[x][y][z + 1] = dist[x][y][z] + 1;
            q.push(make_pair(x, make_pair(y, z + 1)));
        }
    }
}

int main() {
    while(cin >> k >> n >> m) {
        if(n == 0 && m == 0 && k == 0) {
            break;
        }
        int x1, y1, z1, x2, y2, z2;
        for(int l = 0; l < k; ++l) {
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    cin >> a[i][j][l];
                    if(a[i][j][l] == 'S') {
                        z1 = l, x1 = i, y1 = j;
                        a[i][j][l] = '.';
                    }
                    if(a[i][j][l] == 'E') {
                        z2 = l, x2 = i, y2 = j;
                        a[i][j][l] = '.';
                    }
                }
            }
        }
        for(int l = 0; l < k; ++l) {
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < m; ++j) {
                    dist[i][j][l]  = INT_MAX;
                }
            }
        }
        bfs(x1, y1, z1);
        if(dist[x2][y2][z2] != INT_MAX) cout << "Escaped in " << dist[x2][y2][z2] << " minute(s)." << endl;
        else cout << "Trapped!" << endl;
    }

    return 0;
}