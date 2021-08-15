#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int h;
    cin >> h;
    cin.ignore();
    string s;
    getline(cin, s);
    long long start = pow(2, h + 1) - 1, pos = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == 'L') {
            pos = 2 * pos;
            start -= pow(2, i);
        } else if(s[i] == 'R') {
            pos = 2 * pos + 1;
            start -= pow(2, i);
        }
    }
    cout << start - pos << endl;
    return 0;
}