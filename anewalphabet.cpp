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
    map <char, string> alh;
    alh['a'] = "@";
    alh['b'] = "8";
    alh['c'] = "(";
    alh['d'] = "|)";
    alh['e'] = "3";
    alh['f'] = "#";
    alh['g'] = "6";
    alh['h'] = "[-]";
    alh['i'] = "|";
    alh['j'] = "_|";
    alh['k'] = "|<";
    alh['l'] = "1";
    alh['m'] = "[]\\/[]";
    alh['n'] = "[]\\[]";
    alh['o'] = "0";
    alh['p'] = "|D";
    alh['q'] = "(,)";
    alh['r'] = "|Z";
    alh['s'] = "$";
    alh['t'] = "']['";
    alh['u'] = "|_|";
    alh['v'] = "\\/";
    alh['w'] = "\\/\\/";
    alh['x'] = "}{";
    alh['y'] = "`/";
    alh['z'] = "2";
    string s;
    getline(cin, s);
    for(auto& c : s) {
        if(c >= 'A' && c <= 'Z') {
            c = char(c + 32);
        }
        if(!alh[c].empty()) {
            cout << alh[c];
        } else {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}