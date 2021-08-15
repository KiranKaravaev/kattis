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
        int k, n;
        cin >> k >> n;
        cout << k << " " << (n * (n + 1)) / 2 + n << endl;
    }
    return 0;
}