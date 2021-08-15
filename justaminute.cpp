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
    int time1 = 0, time2 = 0;
    while(n--) {
        int m, s;
        cin >> m >> s;
        time1 += m * 60;
        time2 += s;
    }
    if(time2 <= time1) {
        cout << "measurement error" << endl;
    } else {
        printf("%.7lf\n", 1.0 * time2 / time1);
    }
    return 0;
}