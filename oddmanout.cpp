#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

const double pi = 3.14159265;

int main() {
    int t;
    cin >> t;
    for(int ind = 1; ind <= t; ++ind) {
        int n;
        cin >> n;
        map <int, int> m;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
            ++m[a[i]];
        }
        int color = -1;
        for(const auto& it : m) {
            if(it.second & 1) {
                color = it.first;
                break;
            }
        }
        for(int i = 0; i < n; ++i) {
            if(a[i] == color) {
                cout << "Case #" << ind << ": " << a[i] << endl;
                break;
            }
        }
    }
    return 0;
}