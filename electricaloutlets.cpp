#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int res = 1;
        while(n--) {
            int a;
            cin >> a;
            --res;
            res += a;
        }
        cout << res << endl;
    }
    return 0;
}