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
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int l = a[0], r = a[0];
    for(int i = 1; i < n; ++i) {
        if(a[i] == r + 1) {
            r = a[i];
        } else {
            if(l == r) {
                cout << l << " ";
            } else if(l + 1 == r) {
                cout << l << " " << r << " ";
            } else {
                cout << l << "-" << r << " ";
            }
            l = a[i], r = a[i];
        }
    }
    if(l == r) {
        cout << l << endl;
    } else if(l + 1 == r) {
        cout << l << " " << r << endl;
    } else {
        cout << l << "-" << r << endl;
    }
    return 0;
}