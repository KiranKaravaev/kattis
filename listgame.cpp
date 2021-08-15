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
    for(int i = 2; i * i <= n; ++i) {
        while(n % i == 0) {
            ++res;
            n /= i;
        }
    }
    if(n > 1) {
        ++res;
    }
    cout << res << endl;
    return 0;
}