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
    int n;
    cin >> n;
    string s, s1;
    cin >> s >> s1;
    if(n & 1) {
        bool ok = true;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == s1[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Deletion succeeded" : "Deletion failed") << endl;
    } else {
        cout << (s == s1 ? "Deletion succeeded" : "Deletion failed") << endl;
    }
    return 0;
}