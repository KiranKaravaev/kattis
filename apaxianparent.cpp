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
    string y, p;
    cin >> y >> p;
    if(y[y.size() - 1] == 'x' && y[y.size() - 2] == 'e') {
        cout << y << p << endl;
    } else if(y[y.size() - 1] == 'a' || y[y.size() - 1] == 'i' || y[y.size() - 1] == 'o' || y[y.size() - 1] == 'u') {
        y.erase(y.size() - 1);
        cout << y << "ex" << p << endl;
    } else if(y[y.size() - 1] == 'e') {
        cout << y << "x" << p << endl;
    } else {
        cout << y << "ex" << p << endl;
    }
    return 0;
}