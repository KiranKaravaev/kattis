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
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;
        cout << (1 << k) - 1 << endl;
    }
    return 0;
}