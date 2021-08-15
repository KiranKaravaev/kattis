#include <iostream>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int res = 0;
    while(n--) {
        int m;
        cin >> m;
        res += x;
        res -= m;
    }
    cout << res + x << endl;
    return 0;
}
