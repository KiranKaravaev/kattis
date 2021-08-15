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
    vector <string> strs;
    string s;
    int mx_len = 0;
    while(getline(cin, s)) {
        strs.push_back(s);
        mx_len = max(mx_len, (int)s.size());
    }
    int res = 0;
    for(int i = 0; i < strs.size() - 1; ++i) {
        res += pow(mx_len - strs[i].size(), 2);
    }
    cout << res << endl;
    return 0;
}