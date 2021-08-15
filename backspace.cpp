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
    cin >> s;
    vector <char> word;
    for(const auto& c : s) {
        if(c == '<') {
            word.pop_back();
        } else {
            word.push_back(c);
        }
    }
    for(const auto& c : word) {
        cout << c;
    }
    cout << endl;
    return 0;
}