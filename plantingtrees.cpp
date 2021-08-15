#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int mx = -1;
    for(int i = 0; i < n; ++i) {
        mx = max(mx, a[i] + n - i);
    }
    cout << mx + 1 << endl;
    return 0;
}