#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    string s;
    cin >> s;
    double k1 = 0, k2 = 0, k3 = 0, k4 = 0;
    for(auto c : s) {
        if(c == '_') {
            ++k1;
        } else if(c >= 'a' && c <= 'z') {
            ++k2;
        } else if(c >= 'A' && c <= 'Z') {
            ++k3;
        } else {
            ++k4;
        }
    }
    printf("%.6lf\n%.6lf\n%.6lf\n%.6lf\n", k1 / s.size(), k2 / s.size(), k3 / s.size(), k4 / s.size());
    return 0;
}