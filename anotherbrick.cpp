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

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    deque <int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int H = 0;
    while(!a.empty() && H < h) {
        int W = 0;
        while(W < w && !a.empty()) {
            W += a.front();
            a.pop_front();
        }
        if(W == w) {
            ++H;
        } else {
            break;
        }
    }
    cout << (H == h ? "YES" : "NO") << endl;
    return 0;
}