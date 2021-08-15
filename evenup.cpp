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
    int n;
    cin >> n;
    deque <int> d;
    while(n--) {
        int a;
        cin >> a;
        if(!d.empty()) {
            if(d.back() % 2 == a % 2) {
                d.pop_back();
            } else {
                d.push_back(a);
            }
        } else {
            d.push_back(a);
        }
    }
    cout << d.size() << endl;
    return 0;
}