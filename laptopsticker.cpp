#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << (w2 + 2 <= w1 && h2 + 2 <= h1) << endl;
    return 0;
}
