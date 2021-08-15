#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;


int main(){
    int n, m, c, r;
    cin >> n >> m >> c >> r;
    for(int i = 0; i < n; ++i) {
        string line;
        for(int j = 0; j < m; ++j) {
            char a;
            cin >> a;
            for(int k = 0; k < r; ++k) {
                line += a;
            }
        }
        for(int j = 0; j < c; ++j) {
            cout << line << endl;
        }
    }
    return 0;
}