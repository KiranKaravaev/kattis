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
    int n;
    cin >> n;
    vector <string> a(n), b(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    bool ok = true;
    for(int i = 0; i < n; ++i) {
       if(a[i] != b[i]) {
           ok = false;
           break;
       }
    }
    if(ok) {
        cout << "INCREASING" << endl;
        return 0;
    }
    ok = true;
    for(int i = 0; i < n; ++i) {
        if(a[i] != b[n - i - 1]) {
            ok = false;
            break;
        }
    }
    if(ok) {
        cout << "DECREASING" << endl;
    } else {
        cout << "NEITHER" << endl;
    }
    return 0;
}