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
    int k, m;
    cin >> k >> m;
    int time = 0;
    while(m--) {
        int t;
        cin >> t;
        char r;
        cin >> r;
        time += t;
        if(time >= 220) {
            cout << k << endl;
            break;
        }
        if(r == 'T') {
            ++k;
            if(k == 9) {
                k = 1;
            }
        }
    }
    return 0;
}