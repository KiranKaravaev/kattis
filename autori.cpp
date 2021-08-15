#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool write = true;
    for(auto c : s) {
        if(write) {
            cout << c;
            write = false;
        } else {
            if(c == '-') {
                write = true;
            }
        }
    }
    cout << endl;
    return 0;
}