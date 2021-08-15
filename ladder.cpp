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
    double h, v;
    cin >> h >> v;
    cout << ceil(h / sin(v * 3.14159265 / 180)) << endl;
    return 0;
}