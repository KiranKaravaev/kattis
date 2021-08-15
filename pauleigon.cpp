#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    int n, p, q;
    cin >> n >> p >> q;
    cout << (((p + q) / n) & 1 ? "opponent" : "paul") << endl;
    return 0;
}