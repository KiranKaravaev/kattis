#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

bool used[777];
bool used_k[33];
int n, m, k;
char a[777][777];
vector < vector <int> > st(33);
int g[33][33];

void dfs(int start) {
    used[start] = true;
    for(int j = 0; j < k; ++j) {
        if(g[start][j] && !used[j]) {
            dfs(j);
        }
    }
}

int main() {
    scanf("%d %d %d\n", &n, &m, &k);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            scanf("%c", &a[i][j]);
        }
        char c;
        scanf("%c", &c);
    }
    for(int j = 0; j < m; ++j) {
        set <char> uni;
        for(int i = 0; i < n; ++i) {
            uni.insert(a[i][j]);
        }
        while(uni.size() > 1) {
            int front = *uni.begin();
            uni.erase(uni.begin());
            for(const auto& it : uni) {
                g[front - 'A'][it - 'A'] = 1;
                g[it - 'A'][front - 'A'] = 1;
            }
        }
    }
    int res = 0;
    for(int c = 0; c < k; ++c) {
        if(!used[c]) {
            ++res;
            dfs(c);
        }
    }
    cout << res << endl;
    return 0;
}