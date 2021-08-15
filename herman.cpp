#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

const double pi = 3.14159265359;

int main(){
    int r;
    cin >> r;
    printf("%.6lf\n%.6lf\n", pi * r * r, 2.0 * r * r);
    return 0;
}