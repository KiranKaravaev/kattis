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
    bool find = false;
    for(int ind = 1; ind <= 5; ++ind) {
        string s;
        cin >> s;
        for(int i = 0; i <= s.size() - 3; ++i) {
            if(s[i] == 'F' && s[i + 1] == 'B' && s[i + 2] == 'I') {
                cout << ind << " ";
                find = true;
            }
        }
    }
    if(!find) {
        cout << "HE GOT AWAY!";
    }
    cout << endl;
    return 0;
}