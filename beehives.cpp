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

double dist(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    double d;
    int n;
    while(cin >> d >> n) {
        if(d == 0 && n == 0) {
            break;
        }
        vector<pair<double, double> > a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first >> a[i].second;
        }
        int cnt_sour = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j && dist(a[i].first, a[i].second, a[j].first, a[j].second) < d) {
                    ++cnt_sour;
                    break;
                }
            }
        }
        cout << cnt_sour << " sour, " << n - cnt_sour << " sweet" << endl;
    }
    return 0;
}