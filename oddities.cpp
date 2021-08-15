#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int a;
        cin >> a;
        cout << a << (abs(a) %  2 == 1 ? " is odd" : " is even") << endl;
    }
    return 0;
}