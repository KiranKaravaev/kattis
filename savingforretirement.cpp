#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    int b, b_r, b_s, a, a_s;
    cin >> b >> b_r >> b_s >> a >> a_s;
    cout << a + (((b_r - b) * b_s + a_s - 1) / a_s) + (((b_r - b) * b_s) % a_s == 0) << endl;
    return 0;
}