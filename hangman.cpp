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
    string s, s1;
    cin >> s >> s1;
    map <char, bool> consist;
    for(const auto& c : s) {
        consist[c] = true;
    }
    int good = 0, bad = 0, len = consist.size();
    for(const auto& c : s1) {
        if(consist[c]) {
            ++good;
            if(good == len) {
                cout << "WIN" << endl;
                return 0;
            }
        } else {
            ++bad;
            if(bad == 10) {
                cout << "LOSE" << endl;
                return 0;
            }
        }
    }
    return 0;
}