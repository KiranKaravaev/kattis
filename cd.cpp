#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) {
            return 0;
        }
        map <int, bool> used;
        while(n--) {
            int a;
            scanf("%d", &a);
            used[a] = true;
        }
        int res = 0;
        while(m--) {
            int a;
            scanf("%d", &a);
            if(used[a]) {
                ++res;
            }
        }
        cout << res << endl;
    }
    return 0;
}