#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

const double pi = 3.14159265;

int main() {
    int n;
    cin >> n;
    int s = 1, res = 1;
    while(s < n) {
        s += s;
        ++res;
    }
    cout << res << endl;
    return 0;
}