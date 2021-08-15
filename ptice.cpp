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
    string s;
    cin >> s;
    int k1 = 0;
    for(int i = 0; i < n; ++i) {
        if(s[i] == char('A' + (i % 3))) {
            ++k1;
        }
    }
    int k2 = 0;
    for(int i = 0; i < n; ++i) {
        if(i % 4 == 0) {
            if(s[i] == 'B') {
                ++k2;
            }
        } else {
            if(s[i] == char('A' + ((i % 4) - 1))) {
                ++k2;
            }
        }
    }
    int k3 = 0;
    for(int i = 0; i < n; ++i) {
        if(i % 6 < 2) {
            if(s[i] == 'C') {
                ++k3;
            }
        } else if(i % 6 < 4) {
            if(s[i] == 'A') {
                ++k3;
            }
        } else {
            if (s[i] == 'B') {
                ++k3;

            }
        }
    }
    int k = max(k1, max(k2, k3));
    cout << k << endl;
    if(k1 == k) {
        cout << "Adrian" << endl;
    }
    if(k2 == k) {
        cout << "Bruno" << endl;
    }
    if(k3 == k) {
        cout << "Goran" << endl;
    }
    return 0;
}