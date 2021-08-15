#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    string s;
    cin >> s;
    int a[3] = {1, 0, 0};
    for(auto c : s) {
        if(c == 'A') {
            swap(a[0], a[1]);
        } else if(c == 'B') {
            swap(a[1], a[2]);
        } else {
            swap(a[0], a[2]);
        }
    }
    for(int i = 0; i < 3; ++i) {
        if(a[i] == 1) {
            cout << i + 1 << endl;
        }
    }
    return 0;
}