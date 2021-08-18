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
    string s;
    cin >> s;
    int x = atoi(s.c_str());
    sort(s.begin(), s.end());
    int res = INT_MAX;
    do {
        int n = atoi(s.c_str());
        if(n > x) {
            res = min(res, n);
        }
    } while(next_permutation(s.begin(), s.end()));
    cout << (res == INT_MAX ? 0 : res) << endl;
    return 0;
}