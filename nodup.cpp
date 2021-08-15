#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    map <string, bool> used;
    string s;
    while(cin >> s) {
        if(used[s]) {
            cout << "no" << endl;
            return 0;
        }
        used[s] = true;
    }
    cout << "yes" << endl;
    return 0;
}
