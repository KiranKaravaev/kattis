#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

const double pi = 3.14159265;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    string ord;
    cin >> ord;
    for(const auto& c : ord) {
        cout << a[c - 'A'] << " ";
    }
    cout << endl;
    return 0;
}