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
    string s;
    cin >> s;
    char prev = '#';
    for(const auto& c : s) {
        if(c != prev) {
            cout << c;
            prev = c;
        }
    }
    cout << endl;
    return 0;
}