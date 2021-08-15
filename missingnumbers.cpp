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
    int n;
    cin >> n;
    int cur = 1;
    bool good = true;
    while(n--) {
        int x;
        cin >> x;
        if(x != cur) {
            good = false;
            for(int i = cur; i < x; ++i) {
                cout << i << endl;
            }
            cur = x + 1;
        } else {
            ++cur;
        }
    }
    if(good) {
        cout << "good job" << endl;
    }
    return 0;
}