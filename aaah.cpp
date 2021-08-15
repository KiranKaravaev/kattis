#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    string s, s1;
    cin >> s >> s1;
    cout << (s1.size() <= s.size() ? "go" : "no") << endl;
    return 0;
}