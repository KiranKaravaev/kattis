#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

bool is_digit(string s) {
    for(const auto& c : s) {
        if(!(c >= '0' && c <= '9')) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector < pair <int, string> > v;
    while(n--) {
        string s, s1;
        cin >> s >> s1;
        if(is_digit(s)) {
            v.push_back({atoi(s.c_str()) / 2, s1});
        } else {
            v.push_back({atoi(s1.c_str()), s});
        }
    }
    sort(v.begin(), v.end());
    for(const auto& c : v) {
        cout << c.second << endl;
    }
    return 0;
}