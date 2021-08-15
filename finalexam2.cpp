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
    char ans[n];
    for(int i = 0; i < n; ++i) {
        cin >> ans[i];
    }
    int res = 0;
    for(int i = 0; i < n - 1; ++i) {
        if(ans[i] == ans[i + 1]) {
            ++res;
        }
    }
    cout << res << endl;
    return 0;
}