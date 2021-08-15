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
    int n, k = 1;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        string names[n];
        for(int i = 0; i < n; ++i) {
            cin >> names[i];
        }
        vector <string> res(n);
        for(int i = 0; i < n; i += 2) {
            int l = i / 2, r = n - (i / 2) - 1;
            if(l != r) {
                res[i / 2] = names[i];
                res[n - (i / 2) - 1] = names[i + 1];
            } else {
                res[i / 2] = names[i];
            }
        }
        cout << "SET " << k << endl;
        ++k;
        for(const auto& name : res) {
            cout << name << endl;
        }
    }
    return 0;
}