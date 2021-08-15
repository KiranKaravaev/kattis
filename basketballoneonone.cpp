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
    char p;
    int s;
    int k1 = 0, k2 = 0;
    while(cin >> p >> s) {
        if(p == 'A') {
            k1 += s;
        } else {
            k2 += s;
        }
        if(k1 - 2 >= k2 && k1 > 10) {
            cout << 'A' << endl;
            return 0;
        }
        if(k2 - 2 >= k1 && k2 > 10) {
            cout << 'B' << endl;
            return 0;
        }
    }
    return 0;
}