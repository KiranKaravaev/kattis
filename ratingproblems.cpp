#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double s = 0;
    for(int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        s += a;
    }
    cout << (s + (n - m) * -3) / n << " " << (s + (n - m) * 3) / n << endl;
    return 0;
}
