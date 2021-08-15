#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double res = 0;
    while(n--) {
        double a, b;
        cin >> a >> b;
        res += a * b;
    }
    printf("%.3lf\n", res);
    return 0;
}
