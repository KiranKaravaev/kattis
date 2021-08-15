#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    long long a, b;
    while(cin >> a >> b) {
        if(a > b) {
            swap(a, b);
        }
        cout << b - a << endl;
    }
    return 0;
}