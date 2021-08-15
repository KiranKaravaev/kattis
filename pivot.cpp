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
    int a[n];
    int indL[n], indR[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(i == 0) {
            indL[i] = INT_MIN;
        } else {
            indL[i] = max(indL[i - 1], a[i - 1]);
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        if(i == n - 1) {
            indR[i] = INT_MAX;
        } else {
            indR[i] = min(indR[i + 1], a[i + 1]);
        }
    }
    int res = 0;
    for(int i = 0; i < n; ++i) {
        if(a[i] > indL[i] && a[i] < indR[i]) {
            //cout << indL[i] << " " << indR[i] << " " << a[i] << endl;
            ++res;
        }
    }
    cout << res << endl;
    return 0;
}