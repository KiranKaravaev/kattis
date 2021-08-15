#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

double dist(int x0, int y0, int x1, int y1, int x2, int y2) {
    double A = y2 - y1, B = x1 - x2, C = -x1 * (y2 - y1) + y1 * (x2 - x1);
    return fabs(A * x0 + B * y0 + C) / sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}

int main() {
    int x0, y0, x1, y1, x2, y2;
    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;
    printf("%.4lf\n", min(min(dist(x0, y0, x1, y1, x2, y1), dist(x0, y0, x1, y1, x1, y2)), min(dist(x0, y0, x1, y2, x2, y2), dist(x0, y0, x2, y1, x2, y2))));
    return 0;
}