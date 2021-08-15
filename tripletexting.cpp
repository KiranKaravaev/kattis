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
    int len = s.size() / 3;
    map <string, int> cnt;
    for(int i = 0; i < s.size(); i += len) {
        string t;
        for(int j = i; j < i + len; ++j) {
            t += s[j];
        }
        ++cnt[t];
    }
    for(const auto& it : cnt) {
        if(it.second >= 2) {
            cout << it.first << endl;
        }
    }
    return 0;
}