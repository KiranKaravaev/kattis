#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        set <string> s;
        while(n--) {
            string name;
            cin >> name;
            s.insert(name);
        }
        cout << s.size() << endl;
    }
    return 0;
}
