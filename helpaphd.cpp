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
        int t;
        cin >> t;
        while(t--) {
            string s;
            cin >> s;
            string a, b;
            bool add_a = true;
            for(const auto& c : s) {
                if(c == '+') {
                    add_a = false;
                } else {
                    if(add_a) {
                        a += c;
                    } else {
                        b += c;
                    }
                }
            }
            if(add_a) {
                cout << "skipped" << endl;
            } else {
                cout << atoi(a.c_str()) + atoi(b.c_str()) << endl;
            }
        }
        return 0;
    }