#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int main() {
    map <int, int> cnt_x, cnt_y;
    int x, y;
    while(cin >> x >> y) {
        ++cnt_x[x];
        ++cnt_y[y];
    }
    for(const auto& it : cnt_x) {
        if(it.second == 1) {
            cout << it.first << " ";
        }
    }
    for(const auto& it : cnt_y) {
        if(it.second == 1) {
            cout << it.first << endl;
        }
    }
    return 0;
}