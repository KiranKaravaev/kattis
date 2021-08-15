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
    int n;
    scanf("%d\n", &n);
    while(n--) {
        string s;
        getline(cin, s);
        map <char, bool> exist;
        for(const auto& c : s) {
            if(c >= 'a' && c <= 'z') {
                exist[c] = true;
            } else if(c >= 'A' && c <= 'Z') {
                exist[char(c + 32)] = true;
            }
        }
        if(exist.size() != 26) {
            cout << "missing ";
            for (char c = 'a'; c <= 'z'; ++c) {
                if (!exist[c]) {
                    cout << c;
                }
            }
            cout << endl;
        } else {
            cout << "pangram" << endl;
        }
    }
    return 0;
}