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
    double x1, y1, x2, y2, p;
    while(cin >> x1) {
        if(x1 == 0) {
            break;
        }
        cin >> y1 >> x2 >> y2 >> p;
        printf("%.6lf\n", pow(pow(fabs(x1 - x2), p) + pow(fabs(y1 - y2), p), 1.0 / p));
    }
    return 0;
}