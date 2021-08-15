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
    double x;
    cin >> x;
    printf("%.lf\n", round(x * 1000 * 5280.0 / 4854.0 + 0.1));
    return 0;
}