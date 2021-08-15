#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int mulp(int n) {
    int res = 1;
    while(n) {
        if(n % 10 != 0) {
            res *= n % 10;
        }
         n /= 10;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while(n > 9) {
        n = mulp(n);
    }
    cout << n << endl;
    return 0;
}