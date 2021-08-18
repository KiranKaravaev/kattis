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

char op[15];

int main() {
    deque <int> l, r;
    int n;
    scanf("%d\n", &n);
    int size = 0;
    while(n--) {
        int x;
        scanf("%s%d", &op, &x);
        if(!strcmp(op, "get")) {
            int ind = x;
            if(ind + 1 <= l.size()) {
                cout << l[ind] << endl;
            } else {
                ind -= l.size();
                cout << r[ind] << endl;
            }
        } else if(!strcmp(op, "push_back")) {
            ++size;
            r.push_back(x);
            if(r.size() > l.size()) {
                l.push_back(r.front());
                r.pop_front();
            }
        } else if(!strcmp(op, "push_front")) {
            ++size;
            l.push_front(x);
            if(l.size() > r.size() + 1) {
                r.push_front(l.back());
                l.pop_back();
            }
        } else {
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