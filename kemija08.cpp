#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <deque>
#include <climits>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i = 0; i < s.size(); ++i) {
        cout << s[i];
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            i += 2;
        }
    }
    cout << endl;
    return 0;
}