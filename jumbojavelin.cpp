#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    int res = -n;
    while(n--) {
        int a;
        cin >> a;
        res += a;
    }
    cout << res + 1 << endl;
    return 0;
}
