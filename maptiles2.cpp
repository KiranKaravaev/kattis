#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.size() << " ";
    int x = 0, y = 0;
    for(const char& pos : s) {
        x *= 2, y *= 2;
        if(pos == '1') {
            ++x;
        } else if(pos == '2') {
            ++y;
        } else if(pos == '3') {
            ++x;
            ++y;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}