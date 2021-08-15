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
    string s;
    cin >> s;
    int k_t = 0, k_g = 0, k_c = 0;
    for(const auto& c : s) {
        if(c == 'T') {
            ++k_t;
        } else if(c == 'C') {
            ++k_c;
        } else {
            ++k_g;
        }
    }
    cout << k_t * k_t + k_c * k_c + k_g * k_g + 7 * min(k_t, min(k_c, k_g)) << endl;
    return 0;
}