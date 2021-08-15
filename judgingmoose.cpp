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
    int l, r;
    cin >> l >> r;
    if(l == r) {
        if(l == 0) {
            cout << "Not a moose" << endl;
        } else {
            cout << "Even " << 2 * l << endl;
        }
    } else {
        cout << "Odd " << 2 * max(l, r) << endl;
    }
    return 0;
}