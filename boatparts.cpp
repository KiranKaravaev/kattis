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
    map <string, bool> used;
    for(int i = 0; i < m; ++i) {
        string name;
        cin >> name;
        if(!used[name]) {
            used[name] = true;
            if(used.size() == n) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    cout << "paradox avoided" << endl;
    return 0;
}