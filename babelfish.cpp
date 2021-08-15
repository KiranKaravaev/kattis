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
    bool check = false;
    map <string, string> dic;
    while(getline(cin, s)) {
        if(s == "") {
            check = true;
        } else {
            if(check) {
                cout << (dic[s].empty() ? "eh" : dic[s]) << endl;
            } else {
                string w1, w2;
                bool add1 = true;
                for(const auto& c : s) {
                    if(c == ' ') {
                        add1 = false;
                    } else {
                        if(add1) {
                            w1 += c;
                        } else {
                            w2 += c;
                        }
                    }
                }
                dic[w2] = w1;
            }
        }
    }
    return 0;
}