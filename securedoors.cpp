#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, bool> in_building;
    while(n--) {
        string cmd;
        cin >> cmd;
        string name;
        cin >> name;
        if(cmd == "entry") {
            if(in_building[name]) {
                cout << name << " entered (ANOMALY)" << endl;
            } else {
                cout << name << " entered" << endl;
            }
            in_building[name] = true;
        } else {
            if(!in_building[name]) {
                cout << name << " exited (ANOMALY)" << endl;
            } else {
                cout << name << " exited" << endl;
            }
            in_building[name] = false;
        }
    }
    return 0;
}