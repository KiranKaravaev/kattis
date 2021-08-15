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
    int osn, res = 1;
    cin >> osn;
    --n;
    while(n--) {
        int a;
        cin >> a;
        if(a > osn) {
            ++res;
        }
        osn = a;
    }
    cout << res << endl;
    return 0;
}