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
    int n, p, s;
    cin >> n >> p >> s;
    while(s--) {
        int m;
        cin >> m;
        int x[m];
        bool del = true;
        for(int i = 0; i < m; ++i) {
            cin >> x[i];
            if(x[i] == p) {
                del = false;
            }
        }
        cout << (del ? "REMOVE" : "KEEP") << endl;
    }
    return 0;
}