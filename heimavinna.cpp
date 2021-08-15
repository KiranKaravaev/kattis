#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int f(string s) {
    string a, b;
    bool add_a = true;
    for(auto c : s) {
        if(c == '-') {
            add_a = false;
        } else {
            if(add_a) {
                a += c;
            } else {
                b += c;
            }
        }
    }
    if(add_a) {
        return 1;
    } else {
        return atoi(b.c_str()) - atoi(a.c_str()) + 1;
    }
}

int main() {
    string s;
    cin >> s;
    string t;
    int res = 0;
    for(auto c : s) {
        if(c == ';') {
            res += f(t);
            t.clear();
        } else {
            t += c;
        }
    }
    cout << res + f(t) << endl;
    return 0;
}