#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if(n & 1) {
        cout << "still running" << endl;
    } else {
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int res = 0;
        for(int i = 0; i < n; i += 2) {
            res += a[i + 1] - a[i];
        }
        cout << res << endl;
    }
    return 0;
}
