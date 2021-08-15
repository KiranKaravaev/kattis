#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int p, q, s;
    cin >> p >> q >> s;
    cout << ((p * q) / __gcd(p, q) <= s ? "yes" : "no") << endl;
    return 0;
}