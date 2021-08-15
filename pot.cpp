#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long res = 0;
    while(n--) {
        int p;
        cin >> p;
        int st = p % 10;
        p /= 10;
        res += pow(p, st);
    }
    cout << res << endl;
    return 0;
}
