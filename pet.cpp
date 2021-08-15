#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector < pair <int, int> > v(5);
    for(int i = 0; i < 5; ++i) {
        v[i].first = 0;
        v[i].second = i + 1;
        for(int j = 0; j < 4; ++j) {
            int a;
            cin >> a;
            v[i].first += a;
        }
    }
    sort(v.begin(), v.end());
    cout << v.back().second << " " << v.back().first << endl;
    return 0;
}
