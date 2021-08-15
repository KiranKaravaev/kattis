#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << (long long)((pow(2, n) + 1) * (pow(2, n) + 1)) << endl;
    return 0;
}
