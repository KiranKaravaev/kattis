#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

const int N = 22;

char s[N];

int main() {
    int n;
    while(scanf("%d\n", &n)) {
        if(n == 0) {
            break;
        }
        char c;
        map <string, set <string> > menu;
        while(n--) {
            string name;
            while (scanf("%s%c", &s, &c)) {
                if(name.empty()) {
                    name = s;
                } else {
                    menu[s].insert(name);
                }
                if (c == '\n') {
                    break;
                }
            }
        }
        for(const auto& it : menu) {
            cout << it.first << " ";
            for(const auto& pos : it.second) {
                cout << pos << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}