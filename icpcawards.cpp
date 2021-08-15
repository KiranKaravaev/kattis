#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, bool> used;
    int k = 0;
    for(int i = 0; i < n; ++i) {
        string uni, name;
        cin >> uni >> name;
        if(!used[uni]) {
            cout << uni << " " << name << endl;
            ++k;
            used[uni] = true;
        }
        if(k == 12) {
            break;
        }
    }
    return 0;
}