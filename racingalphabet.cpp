#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int diff(char from, char to) {
    string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ '";
    int pos1 = alf.find(from), pos2 = alf.find(to);
    return abs(pos1 - pos2);
}

int main() {
    int n;
    scanf("%d\n", &n);
    double len = (2 * 3.141592 * 30) / 28;
    while(n--) {
        string s;
        getline(cin, s);
        char from = s[0];
        double S = 0;
        for(const auto& c : s) {
            //cout << diff(from, c) << endl;
            S += diff(from, c) * len;
            from = c;
        }
        printf("%.6lf\n", S / 15.0 + qs.size());
    }
    return 0;
}