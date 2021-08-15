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
    int res = 0;
    while(n--) {
        int a;
        cin >> a;
        if(a < 0) {
            res += -a;
        }
    }
    cout << res << endl;
    return 0;
}