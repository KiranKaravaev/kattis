#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

string alh = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string f(const string& s) {
    int k = 0;
    for(auto& c : s) {
        k += c - 'A';
    }
    string res;
    for(auto& c : s) {
        res += char('A'+ (((c - 'A') + k) % 26));
    }
    return res;
}

int main() {
    string s;
    cin >> s;
    string s1, s2;
    for(auto i = 0; i < s.size() / 2; ++i) {
        s1 += s[i];
    }
    for(int i = s.size() / 2; i < s.size(); ++i) {
        s2 += s[i];
    }
    s1 = f(s1);
    s2 = f(s2);
    for(int i = 0; i < s1.size(); ++i) {
        cout << char('A'+ (((s1[i] - 'A') + (s2[i] - 'A')) % 26));
    }
    cout << endl;
    return 0;
}