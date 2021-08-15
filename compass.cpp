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
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 <= n2) {
        int r = n2 - n1;
        int l = n1 + 360 - n2;
        cout << (l < r ? -l : r) << endl;
    } else {
        int r = 360 - n1 + n2;
        int l = n1 - n2;
        cout << (l < r ? -l : r) << endl;
    }
    return 0;
}