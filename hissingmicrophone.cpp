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
    for(int i = 1; i < s.size(); ++i) {
        if(s[i] == 's' && s[i - 1] == 's') {
            cout << "hiss" << endl;
            return 0;
        }
    }
    cout << "no hiss" << endl;
    return 0;
}