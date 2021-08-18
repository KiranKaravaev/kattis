#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

int main() {
    deque <int> l, r;
    int n;
    cin >> n;
    int size = 0;
    while(n--) {
        string op;
        cin >> op;
        if(op == "get") {
            int ind;
            cin >> ind;
            if(ind + 1 <= l.size()) {
                cout << l[ind] << endl;
            } else {
                ind -= l.size();
                cout << r[ind] << endl;
            }
        } else if(op == "push_back") {
            int x;
            cin >> x;
            ++size;
            r.push_back(x);
            if(r.size() > l.size()) {
                l.push_back(r.front());
                r.pop_front();
            }
        } else if(op == "push_front") {
            int x;
            cin >> x;
            ++size;
            l.push_front(x);
            if(l.size() > r.size() + 1) {
                r.push_front(l.back());
                l.pop_back();
            }
        } else {
            int x;
            cin >> x;
            ++size;
            l.push_back(x);
            if(l.size() > r.size() + 1) {
                r.push_front(l.back());
                l.pop_back();
            }
        }
    }
    return 0;
}