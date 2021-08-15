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
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        int p = 11;
        while(sum(n * p) != sum(n)) {
            ++p;
        }
        cout << p << endl;
    }
    return 0;
}