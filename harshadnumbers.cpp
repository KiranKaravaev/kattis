#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int sum(int n) {
    int res = 0;
    while(n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while(true) {
        if(n % sum(n) == 0) {
            cout << n << endl;
            return 0;
        }
        ++n;
    }
    return 0;
}