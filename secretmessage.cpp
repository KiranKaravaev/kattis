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
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int len = ceil(sqrt(s.size()));
        for(int i = 0; i < len; ++i) {
            string s1;
            for(int j = i; j < s.size(); j += len) {
                s1 += s[j];
            }
            reverse(s1.begin(), s1.end());
            cout << s1;
        }
        cout << endl;
    }
    return 0;
}