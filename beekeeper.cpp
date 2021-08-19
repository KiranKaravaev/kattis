#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        int mx = -1;
        string res;
        while(n--) {
            string s;
            cin >> s;
            int k = 0;
            for(int i = 1; i < s.size(); ++i) {
                if(s[i] == s[i - 1] && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')) {
                    ++k;
                }
            }
            if(k > mx) {
                mx = k;
                res = s;
            }
        }
        cout << res << endl;
    }
    return 0;
}

