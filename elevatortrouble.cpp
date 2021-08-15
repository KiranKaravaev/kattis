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
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    if(s < g) {
        if(u > 0) {
            int diff = g - s;
            int k1 = diff / u;
            int ost = diff % u;
            if (ost) {
                if (d > 0 && (u - ost) % d == 0 && diff > u) {
                    cout << k1 + (u - ost) / d + 1 << endl;
                } else {
                    cout << "use the stairs" << endl;
                }
            } else {
                cout << k1 << endl;
            }
        } else {
            cout << "use the stairs" << endl;
        }
    } else {
        if(d > 0) {
            int diff = s - g;
            int k1 = diff / d;
            int ost = diff % d;
            if (ost) {
                if (u > 0 && (d - ost) % u == 0 && diff > d) {
                    cout << k1 + (d - ost) / u + 1 << endl;
                } else {
                    cout << "use the stairs" << endl;
                }
            } else {
                cout << k1 << endl;
            }
        } else {
            cout << "use the stairs" << endl;
        }
    }
    return 0;
}