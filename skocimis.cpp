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
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(b - a, c - b) - 1 << endl;
    return 0;
}