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
    int n, h, v;
    cin >> n >> h >> v;
    cout << max(max(v * h, (n - v) * h), max(v * (n - h), (n - v) * (n - h))) * 4 << endl;
    return 0;
}