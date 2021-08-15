#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <climits>

using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    if(m < 45) {
        m += 60;
        m -= 45;
        --h;
        if(h < 0) {
            h = 23;
        }
    } else {
        m -= 45;
    }
    cout << h << " " << m << endl;
    return 0;
}