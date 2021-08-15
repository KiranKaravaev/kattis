#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int one_bits(int n) {
    int res = 0;
    while(n) {
        res += n % 2;
        n /= 2;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        string num;
        int res = 0;
        for(const auto& c : s) {
            num += c;
            res = max(res, one_bits(atoi(num.c_str())));
        }
        cout << res << endl;
    }
    return 0;
}