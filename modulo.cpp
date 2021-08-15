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
    set <int> s;
    int n;
    while(cin >> n) {
        s.insert(n % 42);
    }
    cout << s.size() << endl;
    return 0;
}