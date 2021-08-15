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
    int n;
    cin >> n;
    cout << ( n < 4 ? 1 : n - 2) << endl;
    return 0;
}