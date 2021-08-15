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
    while(t--) {
        int n;
        cin >> n;
        double  time = 0;
        vector <int> w;
        for(int i = 0; i < n; ++i) {
            int m;
            cin >> m;
            int cur_time = 0;
            for(int j = 0; j < m; ++j) {
                int a;
                cin >> a;
                cur_time += a;
            }
            w.push_back(cur_time);
        }
        sort(w.begin(), w.end());
        int prev_time = 0;
        for(int i = 0; i < w.size(); ++i) {
            time += prev_time + w[i];
            prev_time += w[i];
        }
        printf("%.6lf\n", time / n);
    }
    return 0;
}