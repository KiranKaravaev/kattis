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
    int n, m;
    cin >> n >> m;
    if(n > m) {
        int a[m];
        for(int i = 0; i < m; ++i) {
            cin >> a[i];
        }
        sort(a, a + m);
        int s = 1;
        for(int i = 0; i < m; ++i) {
            if(a[i] != s) {
                cout << s << endl;
                return 0;
            }
            ++s;
        }
        cout << s << endl;
    } else {
        cout << "too late" << endl;
    }
    return 0;
}