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
    int k;
    cin >> k;
    long long a = 1, b = 0;
    while(k--) {
        long long t_a = a;
        long long t_b = b;
        a = t_b;
        b = t_b + t_a;
    }
    cout << a << " " << b << endl;
    return 0;
}