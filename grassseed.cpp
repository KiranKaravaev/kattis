#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    double c;
    cin >> c;
    int n;
    cin >> n;
    double res = 0;
    while(n--) {
        double w, h;
        cin >> w >> h;
        res += w * h * c;
    }
    printf("%.6lf\n", res);
    return 0;
}