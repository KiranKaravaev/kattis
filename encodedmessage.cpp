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
    while(n--) {
        string s;
        cin >> s;
        int len = sqrt(s.size());
        for(int i = len - 1; i >= 0; --i) {
            for(int j = i; j < s.size(); j += len) {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}