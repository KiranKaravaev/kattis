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
    string op;
    map <string, int> num;
    map <string, bool> used;
    map <int, bool> used_int;
    map <int, string> get_names;
    while(cin >> op) {
        if(op == "def") {
            string name;
            cin >> name;
            int var;
            cin >> var;
            if(!used[name]) {
                num[name] = var;
                used[name] = true;
                used_int[var] = true;
                get_names[var] = name;
            } else {
                used_int[num[name]] = false;
                get_names[num[name]] = "unknown";
                num[name] = var;
                used_int[var] = true;
                get_names[var] = name;
            }
        } else if(op == "calc"){
            deque <string> opers;
            deque <int> numbers;
            string s;
            string out;
            bool bad = false;
            while(cin >> s) {
                out += s;
                out += " ";
                if(s == "=") {
                    break;
                }
                if(s == "+" || s == "-") {
                    opers.push_back(s);
                } else {
                    if(used[s]) {
                        numbers.push_back(num[s]);
                    } else {
                        bad = true;
                    }
                }
            }
            cout << out;
            if(bad) {
                cout << "unknown" << endl;
            } else {
                while (numbers.size() > 1) {
                    int f = numbers.front();
                    numbers.pop_front();
                    string oper = opers.front();
                    opers.pop_front();
                    if (oper == "+") {
                        numbers[0] += f;
                    } else {
                        numbers[0] = f - numbers[0];
                    }
                }
                cout << (used_int[numbers.front()] ? get_names[numbers.front()] : "unknown") << endl;
            }

        } else {
            num.clear();
            used.clear();
            used_int.clear();
            get_names.clear();
        }
    }
    return 0;
}