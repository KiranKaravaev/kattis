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
    int d;
    cin >> d;
    if(d & 1)  {
        cout << (d / 2) << " " << (d / 2) + 1 << endl;
    } else {
        int s = 0;
        for(int i = 0; i < d; ++i) {
            if(s > d) {
                break;
            }
            if((d - s) % 8 == 0) {
                cout << 2 * ((d - s) / 8) + 2 << " " << 2 * ((d - s) / 8) + 4 << endl;
                return 0;
            }
            if((i + 1) * (i + 1) == d) {
                cout << 0 << " " << (i + 1) << endl;
                return 0;
            }
            s += 12;
        }
         cout << "impossible" << endl;
    }
    return 0;
}