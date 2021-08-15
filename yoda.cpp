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
    string a, b;
    cin >> a >> b;
    while(a.size() < b.size()) {
        a = "0" + a;
    }
    while(b.size() < a.size()) {
        b = "0" + b;
    }
    string new_a, new_b;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] >= b[i]) {
            new_a += a[i];
        }
        if(b[i] >= a[i]) {
            new_b += b[i];
        }
    }
    if(new_a.empty()) {
        cout << "YODA" << endl;
    } else {
        cout << atoi(new_a.c_str()) << endl;
    }
    if(new_b.empty()) {
        cout << "YODA" << endl;
    } else {
        cout << atoi(new_b.c_str()) << endl;
    }
    return 0;
}