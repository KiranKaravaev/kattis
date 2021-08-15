#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int r, e, c;
        cin >> r >> e >> c;
        if(r > e - c) {
            cout << "do not advertise" << endl;
        } else if(e - c > r) {
            cout << "advertise" << endl;
        } else {
            cout << "does not matter" << endl;
        }
    }
    return 0;
}
