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
    int n, w, h;
    cin >> n >> w >> h;
    double c = sqrt(w * w + h * h);
    while(n--) {
        int h;
        cin >> h;
        cout << (h <= c ? "DA" : "NE") << endl;
    }
    return 0;
}