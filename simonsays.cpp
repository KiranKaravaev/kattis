#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

string start = "Simon says ";

int main() {
    int t;
    scanf("%d\n", &t);
    while(t--) {
        string s;
        getline(cin, s);
        bool ok = true;
        for(int i = 0; i < start.size(); ++i) {
            if(start[i] != s[i]) {
                ok = false;
            }
        }
        if(ok) {
            for(int i = 11; i < s.size(); ++i) {
                cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}