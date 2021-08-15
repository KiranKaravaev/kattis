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
    map <string, bool> used;
    char c;
    string s;
    while(scanf("%c", &c) != EOF) {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            s += c;
        } else {
            if(!s.empty()) {
                string t = s;
                transform(t.begin(), t.end(), t.begin(), [](char c) { return tolower(c);});
                if(!used[t]) {
                    cout << s;
                    used[t] = true;
                } else {
                    cout << '.';
                }
                s.clear();
                cout << c;
            }
        }

    }
    return 0;
}