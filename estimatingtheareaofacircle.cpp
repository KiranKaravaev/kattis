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
    double r, m, c;
    while(cin >> r >> m >> c) {
        if(r == 0) {
            break;
        }
        printf("%.5lf %.5lf\n", 3.14159265 * r * r, ((2 * r) * (2 * r)) * (c / m));
    }
    return 0;
}