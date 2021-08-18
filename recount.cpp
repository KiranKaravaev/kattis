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
    string name;
    int mx = -1, k = 0;
    string winner;
    map <string, int> cnt;
    while(getline(cin, name)) {
        if(name == "***") {
            break;
        }
        ++cnt[name];
        if(cnt[name] > mx) {
            mx = cnt[name];
            k = 1;
            winner = name;
        } else if(cnt[name] == mx) {
            ++k;
        }
    }
    cout << (k == 1 ? winner : "Runoff!") << endl;
    return 0;
}