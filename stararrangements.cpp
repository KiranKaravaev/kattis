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
    int n;
    cin >> n;
    cout << n << ":" << endl;
    for(int i = 2; i < n; ++i) {
        if(n % (i + i - 1) == 0 || n % (i + i - 1) == i) {
            cout << i << "," << i - 1 << endl;
        }
        if(n % (i + i) == 0 || n % (i + i) == i) {
            cout << i << "," << i << endl;
        }
    }
    return 0;
}