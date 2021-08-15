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
    double r, c;
    cin >> r >> c;
    double S1 = pi * r * r, S2 = pi * (r - c) * (r - c);
    printf("%.6lf\n", (S2 * 100) / S1);
    return 0;
}