#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    char m;
    cin >> m;
    int res = 0;
    for(int i = 0; i < 4 * n; ++i) {
        char a, b;
        cin >> a >> b;
        if(a == 'A') {
            res += 11;
        } else if(a == 'K') {
            res += 4;
        } else if(a == 'Q') {
            res += 3;
        } else if(a == 'J') {
            if(b == m) {
                res += 20;
            } else {
                res += 2;
            }
        } else if(a == 'T') {
            res += 10;
        } else if(a == '9' && b == m) {
            res += 14;
        }
    }
    cout << res << endl;
    return 0;
}