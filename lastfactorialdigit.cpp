#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int res = 1;
        for(int i = 2; i <= n; ++i) {
            res *= i;
            res %= 10;
        }
        cout << res << endl;
    }
    return 0;
}
